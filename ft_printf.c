/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc       #+#    #+#             */
/*   Updated: 2020/02/17 13:08:18 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_option		*ft_init_struct(void)
{
	t_option	*option;

	if (!(option = malloc(sizeof(t_option))))
		return (NULL);
	option->rprint = NULL;
	option->width = NULL;
	option->preci = 0;
	option->buffer = NULL;
	option->lentot = 0;
	option->flag = 0;
	option->nflag = 0;
	option->percent = 0;
	option->rvalue = 0;
	option->nflag = 0;
	option->npercent = 1;
	option->no = 0;
	option->w = 0;
	option->p = 0;
	option->h = 0;
	option->z = 0;
	option->neg = 0;
	option->f = 0;
	option->i = 0;
	option->j = 0;
	return (option);
}

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

int				ft_find_converter(char c, t_option *option)
{
	char	*converter;
	int		i;

	converter = "cspdiuxX%";
	i = 0;
	while (converter[i])
	{
		if (converter[i] == c)
		{
			option->converter = converter[i];
			return (1);
		}
		i++;
	}
	return (0);
}

int				ft_loop(char *fmt, size_t i, t_option *option, va_list ap)
{
	while (fmt[i])
	{
		if (fmt[i - 1] == '%' && fmt[i] == '%' && option->percent == 0)
		{
			i = ft_else(option, i);
			option->percent = 1;
		}
		else if (fmt[i] == '%' && option->percent == 0
			&& (ft_is_flag(fmt[i + 1]) || ft_is_converter(fmt[i + 1])))
			i = ft_else(option, i);
		else if (fmt[i] == '%' && option->percent == 1)
		{
			i++;
			option->percent = 0;
		}
		else if (option->percent == 0 && ft_find_flag(fmt, i, option, ap))
			i = ft_loop2(option, fmt, i);
		else if (ft_isdigit(fmt[i]) && option->percent == 0)
			i = ft_size_field(option, fmt, i);
		else if (option->percent == 0 && ft_find_converter(fmt[i], option))
			i = ft_loop3(option, i, ap);
		else
			i = ft_loop4(option, fmt, i);
	}
	return (option->rvalue);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	size_t		i;
	char		*fmt;
	t_option	*option;

	va_start(ap, format);
	i = 0;
	if (!(option = ft_init_struct()))
		return (0);
	if (ft_check_error(format, &fmt) == 0)
		return (0);
	if (!ft_memchr(format, '%', ft_strlen((char*)format)))
	{
		ft_putstr((char*)format);
		va_end(ap);
		ft_free_struct(option, &fmt);
		return (ft_strlen((char*)format));
	}
	i = ((char*)ft_memchr((char*)format, '%', ft_strlen(format)) - format);
	ft_write_til_percent(fmt, i);
	i += ft_loop((char*)format, i + 1, option, ap);
	va_end(ap);
	ft_free_struct(option, &fmt);
	return (i);
}
