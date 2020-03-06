/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_preci_field.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:39:48 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/06 14:39:56 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_preci_field(t_op *op)
{
	if (op->zero && op->preci >= 0)
		op->zero = 0;
	if (op->preci != -1 && op->converter == 's' && op->width == -1)
	{
		op->rprint = ft_strndup(op->buffer, op->preci);
	}
	else
	{
		ft_set_precision(op);
	}
	if (op->neg)
	{
		op->rprint = ft_strfjoin("-", op->rprint, 2);
		op->neg = 0;
	}
	if (op->width)
	{
		if (op->preci != -1)
		{
			free(op->buffer);
			op->buffer = ft_strdup(op->rprint);
		}
		ft_set_field(op);
	}
}
