/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_preci_field.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:39:48 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:41:25 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_preci_next(t_op *op, size_t tmp, size_t i, char **str)
{
	tmp = op->preci - tmp;
	(*str) = malloc(sizeof(char) * (op->preci + 1));
	while (i < tmp)
	{
		(*str)[i] = '0';
		i++;
	}
	(*str)[i] = '\0';
	(*str) = ft_strfjoin((*str), op->buffer, 1);
}

void			ft_preci(t_op *op)
{
	size_t		tmp;
	size_t		i;
	char		*str;

	i = 0;
	str = NULL;
	tmp = ft_strlen(op->buffer);
	if (op->preci > (ssize_t)tmp && op->converter != 's')
		ft_preci_next(op, tmp, i, &str);
	else if (op->preci < (ssize_t)tmp && op->converter == 's'
		&& !op->is_a_negative_precision)
	{
		str = ft_strndup(op->buffer, op->preci);
	}
	else
	{
		str = ft_strdup(op->buffer);
	}
	ft_delete(&op->buffer);
	op->buffer = ft_strdup(str);
	ft_delete(&str);
}

void			ft_set_preci_field(t_op *op)
{
	if (op->zero && op->preci >= 0)
		op->zero = 0;
	if (op->preci != -1 && op->converter == 's' && op->width == -1)
	{
		op->rprint = ft_strndup(op->buffer, op->preci);
	}
	else
	{
		ft_preci(op);
	}
	if (op->neg)
	{
		op->buffer = ft_strfjoin("-", op->buffer, 2);
		op->neg = 0;
	}
	if (op->width)
	{
		ft_set_field(op);
	}
	else
		op->rprint = ft_strdup(op->buffer);
}
