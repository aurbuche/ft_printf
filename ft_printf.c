/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 16:21:01 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

t_option		*ft_init_struct(void)
{
	t_option	*option;
	int			i;

	i = -1;
	if (!(option = malloc(sizeof(t_option))))
		return (NULL);
	while (++i < 6)
		option->flags[i] = 0;
	option->width = 0;
	option->preci = 0;
	option->buffer = NULL;
	option->b = 0;
	option->u = 0;
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

char			ft_find_converter(char c)
{
	char	*converter;
	int		i;

	converter = "cspdiuxX%";
	i = 0;
	while (converter[i])
	{
		if (converter[i] == c)
			return (converter[i]);
		i++;
	}
	return (0);
}

int				ft_loop(char *fmt, size_t i, t_option *option, va_list ap)
{
	while (fmt[i])
	{
		if ((fmt[i] == '%') &&
				(ft_find_converter(fmt[i + 1]), option, ap))
		{
			ft_switch(ft_find_converter(fmt[i + 1]), option, ap);
			i += 2;
		}
		else if ((fmt[i] == '%') &&
				!(ft_find_converter(fmt[i + 1]), option, ap))
		{
			ft_find_flag(option, ap, fmt);
		}
		ft_putchar(fmt[i]);
		i++;
	}
	return (i);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	size_t		i;
	char		*fmt;
	t_option	*option;

	va_start(ap, format);
	i = 0;
	fmt = NULL;
	if (!(option = ft_init_struct()))
		return (0);
	if (ft_check_error(format, &fmt) == 0)
		return (0);
	if (!ft_memchr(format, '%', ft_strlen((char*)format)))
	{
		ft_putstr((char*)format);
		va_end(option->ap);
		free(option);
		return (ft_strlen((char*)format));
	}
	i = (char*)ft_memchr((char*)format, '%', ft_strlen((char*)format)) - format;
	ft_write_til_percent(fmt, i - 1);
	i = ft_loop((char*)format, i, option, ap);
	va_end(ap);
	free(option);
	return (i);
}
