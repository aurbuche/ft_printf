/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc       #+#    #+#             */
/*   Updated: 2020/03/02 18:19:07 by aurbuche         ###   ########lyon.fr   */
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

int				ft_loop(char *fmt, size_t i, t_option *op, va_list ap)
{
	op->width = 0;
	op->preci = -1;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			while (!ft_is_converter(fmt[i]))
			{
				if (ft_isdigit(fmt[i]) && op->preci == -1)
					op->width = ft_atoi(fmt + i);
				else if (ft_isdigit(fmt[i]))
					op->preci = ft_atoi(fmt + i);
				else if (fmt[i] == '.')
					op->preci = 0;
				i++;
			}
			dprintf(1, "preci\t: %zd\nwidth\t: %zd\n", op->preci, op->width);
		}
		i++;
		
	}
	(void)ap;
	return (op->rvalue);
		
		// if (fmt[i] == '%' && op->percent == 0)
		// {
		// 	i++;
		// 	op->percent = 1;
		// }
		// if (op->percent)
		// {

		// 	ft_change(op, &fmt, i, ap);
		// }
		// if (ft_find_flag(fmt, i, op) && op->percent)
		// {
		// 	i = ft_loop2(op, fmt, i);
		// }
		// else if (ft_isdigit(fmt[i]))
		// {
		// 	i = ft_size_field(op, fmt, i);
		// }
		// else if (ft_find_converter(fmt[i], op) && op->percent)
		// {
		// 	i = ft_loop3(op, i, ap, fmt);
		// }
		// else
		// {
		// 	i = ft_loop4(op, fmt, i);
		// }
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
		return (0);
	if (ft_check_error(format, &fmt) == 0)
		return (0);
	if (!ft_memchr(format, '%', ft_strlen((char*)format)))
	{
		ft_putstr((char*)format);
		va_end(ap);
		ft_free_struct(op);
		return (ft_strlen((char*)format));
	}
	i = ((char*)ft_memchr((char*)format, '%', ft_strlen(format)) - format);
	ft_write_til_percent(fmt, i);
	i += ft_loop((char*)format, i + 1, op, ap);
	va_end(ap);
	ft_free_struct(op);
	return (i);
}
