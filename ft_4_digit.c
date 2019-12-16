/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_digit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 08:07:23 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_digit(t_option *option, char c, va_list ap)
{
	char	*base;

	base = "0123456789";
	if (c == 'u')
	{
		option->u = va_arg(ap, unsigned int);
		ft_putstr(ft_itoa_base(option->u, base));
	}
	else
	{
		option->b = va_arg(ap, int);
		ft_putnbr(option->b);
	}
}
