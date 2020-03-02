/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 11:19:29 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/02 17:46:50 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_more(t_option *op)
{
	if (op->lentot && op->p)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_preci_field(op, 0);
	}
	else if (op->h && op->p)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_hyphen_preci(op);
	}
	else if (op->p && op->z)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_zandp(op);
	}
	else
	{
		// dprintf(1, "{%s}", op->buffer);
		ft_set_zandh(op);
	}
}

void		ft_set_flag(t_option *op)
{
	if ((op->lentot && !op->p) || (op->lentot && op->p && !op->preci))
	{
		// dprintf(1, "{%d}", 9);
		if (op->neg == 1)
			op->lentot--;
		ft_set_field(op);
	}
	else if (op->z && !op->p && !op->h)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_zero(op);
	}
	else if (op->h && !op->z && !op->p)
	{
		// dprintf(1, "{%d}", 7);
		ft_set_hyphen(op);
	}
	else if ((op->p && !op->lentot && !op->h && !op->z))
	{
		// dprintf(1, "{%d}", 9);
		ft_set_precision(op);
	}
	else
	{
		// dprintf(1, "{%d}", 9);
		ft_set_more(op);
	}
}
