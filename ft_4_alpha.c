/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:42:44 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 15:50:34 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_alpha(t_option *op, va_list ap)
{
	op->buffer = ft_strdup(va_arg(ap, char*));
	if (op->buffer == NULL)
		op->rprint = NULL;
	else if (op->buffer[0] == '\0')
		op->rprint = ft_strdup("");
	else if (op->preci != -1 || op->width)
	{
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
