/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:20:05 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 14:27:16 by aurbuche         ###   ########lyon.fr   */
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
	if (op->preci || op->width)
	{
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}
