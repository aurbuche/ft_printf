/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pf_alpha.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 16:18:20 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_4_alpha(t_option *option, char c)
{
	if (c == 'c')
	{
		option->b = va_arg(option->ap, int);
		ft_putchar(option->b);
	}
	else
	{
		option->buffer = va_arg(option->ap, char *);
		if (option->buffer == '\0')
			ft_putchar('\0');
		else
			ft_putstr(option->buffer);
	}
}
