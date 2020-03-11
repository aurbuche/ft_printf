/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:00:04 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/11 13:58:26 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_c(t_op *op, va_list ap)
{
	char	c;

	if (op->zero && op->is_a_negative_width)
	{
		op->zero = 0;
		op->width = -op->width;
	}
	if (op->converter == 'c')
		c = va_arg(ap, int);
	else
		c = '%';
	op->converter = 'c';
	op->buffer = ft_ctos(c);
	if (op->buffer[0] == '\0' && (op->preci == -1 && op->width == -1))
		op->rprint = ft_strdup("\0");
	else if (op->preci != -1 && op->width == -1)
		op->rprint = ft_strdup(op->buffer);
	else if (op->width != -1)
	{
		if (op->preci != -1)
			op->preci = -1;
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
