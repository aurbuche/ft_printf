/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:42:44 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/04 14:35:37 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_alpha(t_option *op, va_list ap)
{
	if (op->preci == 0)
		op->buffer = ft_strdup("");
	else
		op->buffer = ft_strdup(va_arg(ap, char*));
	if (!op->buffer)
		op->buffer = ft_strdup("(null)");
	else if (op->buffer[0] == '\0')
	{
		op->rprint = ft_strdup("");
	}
	if (op->preci == 0 && op->width == 0)
		op->rprint = ft_strdup("");
	if ((op->preci != -1 || op->width != -1) && !op->is_a_negative_precision)
	{
		if (op->preci == 0 && op->width)
		{
			free(op->buffer);
			op->buffer = ft_strdup("");
		}
		ft_set_flag(op);
	}
	else
	{
		op->rprint = ft_strdup(op->buffer);
	}
	ft_display(op);
}
