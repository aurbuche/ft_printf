/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 11:19:29 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 16:25:27 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_flag(t_option *op)
{
	if (op->is_a_negative_precision)
		op->preci = -op->preci;
	if (op->width >= 0 && op->preci == -1)
	{
		ft_set_field(op);
	}
	else if (op->preci != -1 && op->width == -1)
	{
		ft_set_precision(op);
	}
	else
	{
		if ((op->width > op->preci) || (op->width == 0 && op->preci < 0))
		{
			ft_set_field(op);
		}
		else if (op->preci > op->width)
			ft_set_precision(op);
	}
}
