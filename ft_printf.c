/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 16:54:28 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_init_struct(t_option *option)
{
	int i;

	i = -1;
	while (++i < 6)
		option->flags[i] = 0;
	option->prefix = NULL;
	option->final = NULL;
	option->before = NULL;
	option->word_c = NULL;
	option->word_w = NULL;
	option->width = 0;
	option->preci = 0;
	option->mod = 0;
	option->size_flags = 0;
	option->size_arg = 0;
	option->final_len = 0;
	option->sub_word = 0;
	option->sign = 1;
}

int				ft_check_error(const char *format, t_option **option)
{
	if (!format)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	ft_init_struct(&option);
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

int			ft_loop(char **fmt, size_t i, t_option *option)
{
	int		i;

	i = 0;
	while ((*fmt)[i])
	{
		if ((*fmt)[i] == '%' && (*fmt)[i + 1] != '\0')
			ft_switch(ft_find_converter((*fmt)[i]), option);
		ft_putchar((*fmt)[i]);
		i++;
	}
	return (0);
}

int				ft_printf(const char *format, ...)
{
	t_option	*option;
	size_t		i;

	option->len = 0;
	i = 0;
	va_start(option->ap, format);
	if (ft_check_error(format, &option) == 0)
		return (0);
	if (!ft_memchr(format, '%', ft_strlen(format)))
	{
		ft_putstr(format);
		va_end(option->ap);
		free(option);
		return (ft_strlen(format));
	}
	i = ft_memchr(format, '%', ft_strlen(format));
	i = ft_loop(format, i, option);
	return (0);
}
