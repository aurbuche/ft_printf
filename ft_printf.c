/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 16:16:30 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

t_option		*ft_init_struct(void)
{
	t_option	*option;
	int			i;

	i = -1;
	if (!(option = malloc(sizeof(t_option))))
		return (NULL);
	if (!(option->flags = malloc(sizeof(char) * 7 + 1)))
		return (NULL);
	option->width = 0;
	option->accu = 0;
	option->buffer = NULL;
	option->b = 0;
	option->u = 0;
	option->rvalue = 0;
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
		if (ft_is_flag(fmt[i], i))
		{
			ft_stock_flag(fmt, option);
		}
		if (ft_find_converter(fmt[i], option))
		{
			ft_switch(option, ap);
			i++;
		}
		i++;
	}
	dprintf(1, "__%s__", option->flags);
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
	ft_loop((char*)format, i + 1, option, ap);
	va_end(ap);
	free(option);
	return (i);
}
