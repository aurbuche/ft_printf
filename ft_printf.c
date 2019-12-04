/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:31:43 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 15:56:21 by aurbuche    ###    #+. /#+    ###.fr     */
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

int				ft_check_error(const char *fmt, char **tab)
{
	if (!fmt)
		return (0);
	if (fmt[0] == '%' && fmt[1] == '\0')
		return (0);
	if (!(*tab = ft_strdup((char*)fmt)))
		return (0);
	return (1);
}

static void		ft_sort_type(char **fmt, t_option *option)
{
	while (**fmt && **fmt != '%')
	{
		ft_putchar(**fmt);
		**fmt++;
	}
	**fmt++;
	if (**fmt++ == 'c' || **fmt++ == 'i')
		ft_putchar(**fmt);
}

int				ft_printf(const char *format, ...)
{
	t_option	option;
	char		*fmt = NULL;

	option.len = 0;
	va_start(option.ap, *fmt);
	if (ft_check_error(format, &fmt) == 0)
		return (0);
	ft_init_struct(&option);
	ft_sort_type(&fmt, &option);
	return (ft_strlen(format));
}
/*
void foo(char *fmt, ...)
{
	va_list ap, ap2;
	int d;
	char c, *s;

	va_start(ap, fmt);
	va_copy(ap2, ap);
	while (*fmt)
		switch(*fmt++) 
		{

			case 's':
				s = va_arg(ap, char *);
				printf("string %s\n", s);
				break;
			case 'd':
				d = va_arg(ap, int);
				printf("int %d\n", d);
				break;
			case 'c':
				c = va_arg(ap, int);
				printf("char %c\n", c);
				break;
		}
	va_end(ap);*/
