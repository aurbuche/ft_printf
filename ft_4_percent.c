/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_percent.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 09:07:13 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/04 15:07:11 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *option)
{
	option->buffer = ft_strdup("%");
	if (option->h && option->hyphen > 1)
		ft_set_hyphen(option);
	else if (option->lentot)
		ft_set_field(option);
	else
		option->rprint = ft_strdup("%");
	option->percent = 1;
	ft_display(option);
}
