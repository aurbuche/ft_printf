/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurelienbucher <aurelienbucher@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:07:13 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/01 21:24:05 by aurelienbuc      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *op, char *str, int i)
{
	op->buffer = ft_ctos(str[i]);
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
