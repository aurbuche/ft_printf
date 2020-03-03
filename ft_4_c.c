/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:00:04 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 14:28:56 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_c(t_option *op, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	op->buffer = ft_ctos(c);
	if (op->preci || op->width)
	{
		ft_set_flag(op);
	}
	else if (op->buffer)
	{
		if (op->buffer != NULL)
			op->rprint = ft_strdup(op->buffer);
		else
			op->rprint = ft_strdup("\0");
	}
	ft_display(op);
}
