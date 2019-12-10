/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 16:23:54 by aurbuche    ###    #+. /#+    ###.fr     */
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

int				ft_check_error(const char *format, char **fmt)
{
	if (!format)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	if (!(*fmt = ft_strdup((char*)format)))
		return (0);
	return (1);
}

void			ft_defind_type(char *fmt, t_option *option, int i)
{
	if (fmt[i] == 'c')
		ft_4_c(option);
	if (fmt[i] == 's')
		ft_4_s(option);
	if (fmt[i] == 'd' || fmt[i] == 'i')
		ft_4_d(option);
	// if (fmt[i] == 'p')
	// 	ft_4_p(option);
}

void			ft_loop(char **fmt, t_option *option)
{
	int		i;

	i = 0;
	while ((*fmt)[i])
	{
		if ((*fmt)[i] == '%')
			if ((*fmt)[i + 1] != '\0')
			{
				ft_defind_type(*fmt, option, i + 1);
				i += 2;
			}
		ft_putchar((*fmt)[i]);
		i++;
	}
}

int				ft_printf(const char *format, ...)
{
	t_option	option;
	char		*fmt;

	fmt = NULL;
	option.len = 0;
	va_start(option.ap, format);
	if (ft_check_error(format, &fmt) == 0)
		return (0);
	ft_init_struct(&option);
	ft_loop(&fmt, &option);
	return (0);
}
