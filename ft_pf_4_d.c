/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pf_4_d.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 18:32:23 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_4_d(t_option *option)
{
	option->b = va_arg(option->ap, int);
	if (option->b == '\0')
		ft_putchar('\0');
	else
		ft_putnbr(option->b);
}
