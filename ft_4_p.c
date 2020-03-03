/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 13:42:22 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 14:27:57 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_p(t_option *op, va_list ap)
{
	char			*base;
	unsigned long	tmp;

	tmp = va_arg(ap, long long);
	base = "0123456789abcdef";
	op->buffer = ft_itoa_p_base(tmp, base);
	if (op->preci || op->width)
		ft_set_flag(op);
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
