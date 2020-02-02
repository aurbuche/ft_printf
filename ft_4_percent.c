/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_percent.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 09:07:13 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/01 18:38:38 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *option)
{
	option->buffer = ft_strdup("%");
	if (option->flag != 0)
	{
		ft_set_flag(option);
		// dprintf(1, "[%d]", 4);
	}
	else
	{
		option->rprint = ft_strdup("%");
	}
	option->percent = 1;
	ft_display(option);
}
