/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:47:27 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 15:52:34 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_4_digit2(t_option *op, int i)
{
	if (i < 0)
	{
		i = -i;
		op->neg = 1;
	}
	op->buffer = ft_itoa(i);
	return (i);
}

void		ft_4_u(t_option *op, va_list ap)
{
	char	*base;
	size_t	i;

	base = "0123456789";
	i = va_arg(ap, unsigned int);
	op->buffer = ft_itoa_base(i, base);
	op->j = i;
	if (!op->j && op->p && !op->preci &&
	!op->w && !op->z && !op->lentot && !op->h)
		op->rprint = ft_strdup("");
	else if (i == 0 && op->p == 1 && op->preci == 0 && !op->zero
		&& !op->lentot && !op->hyphen && !op->width)
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

void		ft_4_di(t_option *op, va_list ap)
{
	int		i;

	i = va_arg(ap, int);
	if (i == -2147483648)
	{
		op->buffer = ft_strdup("2147483648");
		op->neg = 1;
	}
	else
		i = ft_4_digit2(op, i);
	op->i = i;
	if (op->p && op->preci == 0 && op->w < 0)
		op->rprint = ft_strdup(op->buffer);
	else if (i == 0 && op->p && !op->zero
			&& !op->preci && !op->lentot && !op->hyphen)
		op->rprint = ft_strdup("");
	else if (op->flag != 0)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_flag(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
	if (op->neg && !op->f)
		op->rprint = ft_strfjoin("-", op->rprint, 2);
	ft_display(op);
}
