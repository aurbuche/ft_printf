/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_set_flag.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:19:29 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/11 16:50:20 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_flag(t_option *option)
{
	if (option->lentot && option->p)
	{
		ft_set_preci_field(option);
	}
	else if (option->lentot != 0)
	{
		if (option->neg == 1)
			option->lentot--;
		ft_set_field(option);
	}
	else if (option->h == 1 && option->p == 1 && option->converter != 'c' &&
		option->converter != 's')
		ft_set_hyphen_preci(option);
	else if ((option->w && option->lentot == 0)
		|| (option->w && option->h) || (option->w && option->z)
		|| (option->w && option->p))
		ft_set_width(option);
	else if (((option->p == 1 && option->h == 0)
		|| (option->preci > 0 && option->w == 1)))
		ft_set_precision(option);
	else if (option->h == 1 && option->w == 0)
		ft_set_hyphen(option);
	else if (option->z == 1 && option->p == 0)
	{
		ft_set_zero(option);
	}
}
