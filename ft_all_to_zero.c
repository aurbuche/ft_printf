/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_all_to_zero.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/28 10:19:04 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/02 20:34:03 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_all_to_zero(t_option *option)
{
	option->flag = 0;
	option->converter = 0;
	option->w = 0;
	option->z = 0;
	option->p = 0;
	option->h = 0;
	option->hyphen = 0;
	option->lentot = 0;
	option->percent = 0;
}
