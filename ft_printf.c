/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc       #+#    #+#             */
/*   Updated: 2020/02/28 18:18:03 by aurbuche         ###   ########lyon.fr   */
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
		if (fmt[i] == '%' && option->percent == 0)
		{
			i++;
			option->percent = 1;
		}
		if (option->percent)
			ft_change(option, &fmt, i, ap);
		if (ft_find_flag(fmt, i, option) && option->percent)
		{
			i = ft_loop2(option, fmt, i);
		}
		else if (ft_isdigit(fmt[i]))
		{
			i = ft_size_field(option, fmt, i);
		}
		else if (ft_find_converter(fmt[i], option) && option->percent)
		{
			i = ft_loop3(option, i, ap, fmt);
		}
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
		ft_free_struct(option);
		return (ft_strlen((char*)format));
	}
	i = ((char*)ft_memchr((char*)format, '%', ft_strlen(format)) - format);
	ft_write_til_percent(fmt, i);
	i += ft_loop((char*)format, i + 1, option, ap);
	va_end(ap);
	ft_free_struct(option);
	return (i);
}
