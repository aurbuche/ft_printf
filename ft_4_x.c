/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:20:05 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 14:20:20 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_x(t_option *op, va_list ap)
{
	char	*base;
	size_t	i;

	base = "0123456789abcdef";
	if (op->converter == 'X')
		base = "0123456789ABCDEF";
	op->j = va_arg(ap, long long);
	i = op->j;
	op->buffer = ft_itoa_base(i, base);
	if (!op->j && op->p && !op->preci &&
	!op->w && !op->z && !op->lentot && !op->h)
		op->rprint = ft_strdup("");
	else if (op->preci == 0 && i == 0 && op->p == 1
		&& !op->lentot && !op->h && !op->zero && !op->w)
	{

		op->rprint = ft_strdup("");
	}
	else if (op->flag != 0)
	{
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
