/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc       #+#    #+#             */
/*   Updated: 2020/03/03 18:23:31 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_check_error(const char *format, char **fmt)
{
	if (!format)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	if (!((*fmt) = ft_strdup((char*)format)))
		return (0);
	return (1);
}

int				ft_find_converter(char c, t_option *op)
{
	char	*converter;
	int		i;

	converter = "cspdiuxX%";
	i = 0;
	while (converter[i])
	{
		if (converter[i] == c)
		{
			op->converter = converter[i];
			return (1);
		}
		i++;
	}
	return (0);
}

int		ft_pf_atoi(const char *str, size_t *i)
{
	int nb;
	int s;

	nb = 0;
	s = 1;
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\r' || str[*i] == '\v'
	|| str[*i] == '\f' || str[*i] == ' ')
		i++;
	if (str[*i] == '-')
	{
		s = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		nb = nb * 10 + str[*i] - '0';
		(*i)++;
	}
	(*i)--;
	return (nb * s);
}


void			ft_insert_stars(char **fmt, size_t i, t_option *op, va_list ap)
{
	int		tmp;

	tmp = 0;
	op->width = 0;
	op->preci = -1;
	while ((*fmt)[i])
	{
		if ((*fmt)[i] == '%' && !op->percent)
		{
			i++;
			op->percent = 1;
		}
		if (op->percent)
		{
			ft_change(op, (fmt), i, ap);
		}
		if (ft_find_converter((*fmt)[i], op) && op->percent)
		{
			op->percent = 0;
		}
		i++;
	}
}

int			ft_core_printf(char *fmt, size_t i, t_option *op, va_list ap)
{
	op->width = -1;
	op->preci = -1;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			ft_change(op, &fmt, i, ap);
			while (!ft_is_converter(fmt[i]))
			{
				if (ft_isdigit(fmt[i]) && op->preci == -1)
					op->width = ft_pf_atoi(fmt, &i);
				else if (ft_isdigit(fmt[i]))
					op->preci = ft_pf_atoi(fmt, &i);
				else if (fmt[i] == '.')
					op->preci = 0;
				else if (fmt[i] == '-' && fmt[i - 1] == '.')
					op->is_a_negative_precision = 1;
				else if (fmt[i] == '-')
					op->is_a_negative_width = 1;
				i++;
			}
			op->converter = fmt[i];
			// dprintf(1, "preci\t: %zd\nwidth\t: %zd\nhyphen\t: %d\nconverter\t: %c\n", op->preci, op->width, op->hyphen, op->converter);
			ft_switch(op, ap);
			op->flag = 0;
			op->preci = -1;
			op->width = 0;
			op->hyphen = 0;
			op->converter = 0;
		}
		else
		{
			write(1, &fmt[i], 1);
			op->size++;
		}
		i++;
	}
	return (op->size);
}

t_option		*ft_init_struct(void)
{
	t_option	*option;

	if(!(option = (t_option *)malloc(sizeof(t_option))))
		return (NULL);

	ft_bzero(option, sizeof(t_option));
	option->percent = 1;
	return (option);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	size_t		i;
	char		*fmt;
	t_option	*op;

	va_start(ap, format);
	i = 0;
	if (!(op = ft_init_struct()))
		return (-1);
	if (ft_check_error(format, &fmt) == 0)
		return (0);
	if (!ft_memchr(format, '%', ft_strlen((char*)format)))
	{
		ft_putstr((char*)format);
		va_end(ap);
		// ft_free_struct(op);
		return (ft_strlen((char*)format));
	}
	i = ((char*)ft_memchr(format, '%', ft_strlen(format)) - format);
	ft_write_til_percent(fmt, i);
	ft_core_printf((char*)format, i, op, ap);
	va_end(ap);
	return (op->size + i);
}
