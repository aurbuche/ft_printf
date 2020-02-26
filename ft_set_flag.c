/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 11:19:29 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/26 16:13:59 by aurbuche         ###   ########lyon.fr   */
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
		ft_set_hyphen_preci(op);
	}
	else if (op->p && op->z)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_zandp(op);
	}
	else if (op->p && op->w)
	{
		dprintf(1, "{%d}", 9);
		ft_set_pandw(op);
	}
	else if (op->p && op->w && op->z)
		ft_set_pwz(op);
	else if (op->z && !op->zero && op->w)
		ft_set_zandw(op);
	else
	{
		// dprintf(1, "{%s}", op->buffer);
		ft_set_zandh(op);
	}
}

void		ft_set_flag(t_option *op)
{
	if ((op->lentot != 0 && !op->p && !op->h && !op->w)
	|| (op->lentot && op->converter == 'p'))
	{
		if (op->neg == 1)
			op->lentot--;
		ft_set_field(op);
	}
	else if ((op->wn && !op->lentot && !op->p && !op->z && !op->h)
		|| (!op->lentot && op->w && !op->p && !op->z && !op->h)
		|| (op->h && op->w) || (op->w && op->p && !op->preci))
	{
		// dprintf(1, "{%d}", 9);
		ft_set_width(op);
	}
	else if ((op->p == 1 && !op->h && !op->w && !op->z
			&& !op->lentot) || (op->w && op->p))
	{
		// dprintf(1, "{%d}", 9);
		ft_set_precision(op);
	}
	else if (op->h == 1 && !op->w && !op->z && !op->p)
	{
		// dprintf(1, "{%d}", 7);
		ft_set_hyphen(op);
	}
	else if (op->z == 1 && !op->p && !op->w && !op->h)
	{
		// dprintf(1, "{%d}", 6);
		ft_set_zero(op);
	}
	else
	{
		// dprintf(1, "{%d}", 9);
		ft_set_more(op);
	}
}
