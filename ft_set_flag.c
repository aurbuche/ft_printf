/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_set_flag.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:19:29 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/28 13:51:14 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_flag(t_option *option)
{
	if (option->lentot != 0)
		ft_set_field(option);
	if (option->h == 1 && option->p == 0)
		ft_set_hyphen(option);
	if (option->w == 1)
		ft_set_width(option);
	if (option->p == 1 && (option->converter != 'c' ||
		option->converter != 's' || option->converter != 'p'))
		ft_set_precision(option);
	if (option->z == 1)
		ft_set_zero(option);
}
