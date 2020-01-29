/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_set_flag.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:19:29 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 16:14:13 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_flag(t_option *option)
{
	if (option->lentot != 0 && option->preci < option->lentot)
	{
		ft_set_field(option);
	}
	else if (option->h == 1 && option->p == 0)
	{
		ft_set_hyphen(option);
	}
	else if ((option->p == 1 && (option->converter != 'c' ||
		option->converter != 's' || option->converter != 'p') && option->h == 0)
		|| (option->p == 1 && option->w ==1))
	{
		ft_set_precision(option);
	}
	else if (option->w != 0 && option->lentot == 0)
	{
		ft_set_width(option);
	}
	else if (option->z == 1 && option->p == 0)
	{
		ft_set_zero(option);
	}
	else if (option->h == 1 && option->p == 1)
	{
		ft_set_hyphen(option);
		// ft_set_precision(option);
	}
}
