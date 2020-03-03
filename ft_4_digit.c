/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:47:27 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 18:23:47 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_u(t_option *op, va_list ap)
{
	char	*base;
	size_t	i;

	base = "0123456789";
	i = va_arg(ap, unsigned int);
	op->buffer = ft_itoa_base(i, base);
	if (op->preci || op->width)
	{
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	ft_display(op);
}

void		ft_4_di(t_option *op, va_list ap)
{
	int		i;

	i = va_arg(ap, int);
	if (i < 0 && op->preci > 0)
	{
		i = -i;
		op->neg = 1;
	}
	op->buffer = ft_itoa(i);
	if (i == -2147483648)
	{
		free(op->buffer);
		op->buffer = ft_strdup("2147483648");
		op->neg = 1;
	}
	if (op->flag)
	{
		ft_set_flag(op);
	}
	else
	{
		dprintf(1, "{%d}", 9);
		op->rprint = ft_strdup(op->buffer);
	}
	if (op->neg)
		op->rprint = ft_strfjoin("-", op->rprint, 2);
	ft_display(op);
}
