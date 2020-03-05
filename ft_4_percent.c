/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:07:13 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/05 17:07:35 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *op)
{
	op->buffer = ft_strdup("%");
	if (op->preci == 0 && op->width == 0)
		op->rprint = ft_strdup(op->buffer);
	else if (op->preci != -1 && op->width == 0)
		ft_set_field(op);
	else if (op->preci != -1 || op->width != -1)
		ft_set_flag(op);
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
