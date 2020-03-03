/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:07:13 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 14:25:24 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *op)
{
	if (op->h && op->hyphen && !op->z)
		ft_set_hyphen(op);
	else if (op->lentot)
		ft_set_field(op);
	else if ((op->zero && op->p && !op->preci) ||
		(op->zero && op->preci))
		ft_set_zero(op);
	else if (((op->z && op->zero) || (op->z && !op->zero && op->width))
		&& !op->p)
	{
		if (op->width)
			op->zero = ft_strlen(op->width);
		ft_set_zero(op);
	}
	else if (op->h && op->hyphen)
		ft_set_hyphen(op);
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
