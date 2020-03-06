/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc       #+#    #+#             */
/*   Updated: 2020/03/06 16:38:50 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_pf_atoi(t_op *op, const char *str, size_t *i, char option)
{
	int		nb;
	int		s;

	nb = 0;
	s = 1;
	if (option && str[*i] == '0' && str[*i - 1] != '-')
	{
		op->zero = 1;
		(*i)++;
	}
	while (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\r'
	|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == ' ')
		i++;
	if (str[*i] == '-')
	{
		s = -1;
		(*i)++;
	}
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		nb = nb * 10 + str[*i] - '0';
		(*i)++;
	}
	(*i)--;
	return (nb * s);
}

int				main_loop(char *fmt, size_t i, t_op *op)
{
	if (ft_isdigit(fmt[i]) && op->preci == -1)
		op->width = ft_pf_atoi(op, fmt, &i, 1);
	else if (ft_isdigit(fmt[i]))
		op->preci = ft_pf_atoi(op, fmt, &i, 0);
	else if (fmt[i] == '.')
		op->preci = 0;
	else if (fmt[i] == '-' && fmt[i - 1] == '.')
		op->is_a_negative_precision = 1;
	else if (fmt[i] == '-')
		op->is_a_negative_width = 1;
	i++;
	return (i);
}

int				ft_core_printf(char *fmt, size_t i, t_op *op, va_list ap)
{
	op->width = -1;
	op->preci = -1;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			op->percent = 1;
			ft_change(op, &fmt, i, ap);
			while (!ft_is_converter(fmt[i]))
				i = main_loop(fmt, i, op);
			op->converter = fmt[i];
			ft_switch(op, ap);
			ft_all_to_zero(op);
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

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	size_t		i;
	char		*fmt;
	t_op		*op;

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
		ft_free_struct(op, fmt);
		return (ft_strlen((char*)format));
	}
	i = ((char*)ft_memchr(format, '%', ft_strlen(format)) - format);
	ft_write_til_percent(fmt, i);
	ft_core_printf(fmt, i, op, ap);
	i += op->size;
	va_end(ap);
	ft_free_struct(op, fmt);
	return (i);
}
