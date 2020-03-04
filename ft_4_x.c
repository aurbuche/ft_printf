/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:20:05 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/04 17:33:22 by aurbuche         ###   ########lyon.fr   */
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
	i = va_arg(ap, long long);
	op->buffer = ft_itoa_base(i, base);
	if ((op->preci == 0 && op->width == 0) ||
	(i == 0 && op->preci == 0 && op->width == -1))
	{
		if (i == 0)
			op->rprint = ft_strdup("");
		else
			op->rprint = ft_strdup(op->buffer);
	}
	else if (op->preci != -1 || op->width != -1)
	{
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
