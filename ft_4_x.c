/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_x.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 16:20:05 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 13:57:38 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_x(t_option *option, va_list ap)
{
	char	*base;

	base = "0123456789abcdef";
	if (option->converter == 'X')
		base = "0123456789ABCDEF";
	option->b = va_arg(ap, int);
	ft_putstr(ft_itoa_base(option->b, base));
}
