/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:07:13 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 18:23:18 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *op, char *str, int i)
{
	char	*s1;

	s1 = ft_strdup(ft_ctos(str[i + 1]));
	op->buffer = ft_ctos(str[i]);
	if (op->h && op->hyphen && !op->z)
		ft_set_hyphen(op);
	else if (op->lentot)
		ft_set_field(op);
	else if ((op->zero && op->p && !op->preci && op->w) ||
		(op->zero && op->preci))
	{
		// dprintf(1, "{%d}", 8);
		ft_set_zero(op);
	}
	else if (((op->z && op->zero) || (op->z && !op->zero && op->width))
		&& !op->p)
	{
		// dprintf(1, "{%d}", 9);
		if (op->width)
			op->zero = ft_strlen(op->width);
		ft_set_zero(op);
	}
	else if (op->h && op->hyphen)
		ft_set_hyphen(op);
	else
		op->rprint = ft_strdup(op->buffer);
	free(s1);
	op->percent = 1;
	ft_display(op);
}
