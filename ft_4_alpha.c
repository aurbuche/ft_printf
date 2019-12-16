/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_alpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 08:07:18 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_alpha(t_option *option, char c, va_list ap)
{
	if (c == 'c')
	{
		option->b = va_arg(ap, int);
		ft_putchar(option->b);
	}
	else
	{
		option->buffer = va_arg(ap, char *);
		if (option->buffer == '\0')
			ft_putchar('\0');
		else
			ft_putstr(option->buffer);
	}
}
