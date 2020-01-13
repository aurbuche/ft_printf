/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_digit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 16:20:42 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_digit(t_option *option, va_list ap)
{
	char	*base;

	base = "0123456789";
	if (option->converter == 'u')
	{
		option->u = va_arg(ap, unsigned int);
		ft_putstr(ft_itoa_base(option->u, base));
	}
	else
	{
		option->buffer = ft_itoa(va_arg(ap, int));
		if (option->width != NULL)
			ft_set_width(option);
		else
			option->rprint = option->buffer;
	}
	ft_display(option);
}
