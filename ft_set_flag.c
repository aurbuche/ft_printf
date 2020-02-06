/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_set_flag.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:19:29 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/06 17:38:24 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_flag(t_option *option)
{
	if (option->lentot != 0 && option->preci < option->lentot)
	{
		// dprintf(1, "{%d}", 5);
		if (option->neg == 1)
			option->lentot--;
		ft_set_field(option);
	}
	else if (option->h == 1 && option->p == 1 && option->converter != 'c' &&
		option->converter != 's')
	{
		// dprintf(1, "{%d}", 9);
		ft_set_hyphen_preci(option);
	}
	else if ((option->w && option->lentot == 0)
		|| (option->w && option->h) || (option->w && option->z)
		|| (option->w && option->p))
	{
		// dprintf(1, "{%d}", 9);
		ft_set_width(option);
	}
	else if (((option->p == 1 && option->h == 0)
		|| (option->preci > 0 && option->w == 1)))
	{
		// dprintf(1, "{%d}", 9);
		ft_set_precision(option);
	}
	else if (option->h == 1 && option->w == 0)
		ft_set_hyphen(option);
	else if (option->z == 1 && option->p == 0)
	{
		ft_set_zero(option);
	}
}
