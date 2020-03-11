/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_field.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:35:31 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/11 13:58:09 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_continue(t_op *op, size_t tmp, size_t i)
{
	char	c;

	c = op->zero ? '0' : ' ';
	tmp = op->width - tmp;
	op->rprint = malloc(sizeof(char) * (op->width + 1));
	while (i < tmp)
	{
		op->rprint[i] = c;
		i++;
	}
	op->rprint[i] = '\0';
	if (op->is_a_negative_width)
		op->rprint = ft_strfjoin(op->buffer, op->rprint, 2);
	else
		op->rprint = ft_strfjoin(op->rprint, op->buffer, 1);
}

void		ft_set_field(t_op *op)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(op->buffer);
	if (op->neg)
		tmp++;
	if (op->width >= (ssize_t)tmp)
	{
		ft_set_continue(op, tmp, i);
	}
	else
		op->rprint = ft_strdup(op->buffer);
}
