/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pf_4_c.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 15:52:37 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_4_c(t_option *option)
{
	option->b = va_arg(option->ap, int);
	if (option->b == '\0')
		ft_putchar('\0');
	else
		ft_putchar(option->b);
}
