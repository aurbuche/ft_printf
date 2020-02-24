/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 11:19:29 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/24 17:00:57 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_more(t_option *option)
{
	if (option->lentot && option->p)
	{
		dprintf(1, "{%d}", 9);
		ft_set_preci_field(option, 0);
	}
	else if (option->h && option->p)
	{
		ft_set_hyphen_preci(option);
	}
	else if (option->p && option->z)
	{
		ft_set_zandp(option);
	}
	else if (option->p && option->w)
	{
		ft_set_pandw(option);
	}
	else
	{
		// dprintf(1, "{%d}", 9);
		ft_set_zandh(option);
	}
}

void		ft_set_flag(t_option *option)
{
	if (option->lentot != 0 && !option->p && !option->h && !option->w)
	{
		if (option->neg == 1)
			option->lentot--;
		ft_set_field(option);
	}
	else if ((option->wn && !option->lentot && !option->p && !option->z && !option->h)
		|| (option->lentot == 0 && option->w))
	{
		// dprintf(1, "{%d}", 9);
		ft_set_width(option);
	}
	else if (option->p == 1 && !option->h && !option->w && !option->z
			&& !option->lentot)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_precision(option);
	}
	else if (option->h == 1 && !option->w && !option->z && !option->p)
	{
		// dprintf(1, "{%d}", 7);
		ft_set_hyphen(option);
	}
	else if (option->z == 1 && !option->p && !option->w && !option->h)
	{
		// dprintf(1, "{%d}", 6);
		ft_set_zero(option);
	}
	else
	{
		// dprintf(1, "{%d}", 9);
		ft_set_more(option);
	}
}
