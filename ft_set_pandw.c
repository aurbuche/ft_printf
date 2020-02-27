/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_pandw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:59:14 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/27 15:41:46 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_pandw(t_option *op)
{
	if ((op->converter == 'd' || op->converter == 'i')
		&& !op->preci && op->p && !op->width)
	{
		free(op->buffer);
		op->buffer = ft_strdup("");
	}
	if (!op->preci && op->converter == 'd' && op->wn == -1)
	{
		op->rprint = ft_strdup(op->buffer);
	}
	else if (op->width && op->converter != 's' && !op->preci)
	{
		ft_set_width(op);
	}
	else if (op->width && op->converter != 's' && op->preci)
		ft_set_precision(op);
	else
		op->rprint = ft_strdup(op->buffer);
}
