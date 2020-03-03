/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:10:07 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 12:37:52 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_precinext(t_option *op, size_t tmp, size_t i, char c)
{
	tmp = op->preci - tmp;
	op->rprint = malloc(sizeof(char) * (op->preci + 1));
	while (i < tmp)
	{
		op->rprint[i] = c;
		i++;
	}
	op->rprint[i] = '\0';
	op->rprint = ft_strfjoin(op->rprint, op->buffer, 1);
}

void			ft_set_precision(t_option *op)
{
	size_t		tmp;
	size_t		i;
	char		c;

	i = 0;
	tmp = ft_strlen(op->buffer);
	c = '0';
	if (op->preci > (ssize_t)tmp && op->converter != 's' && !op->hyphen)
		ft_set_precinext(op, tmp, i, c);
	else if (op->preci < (ssize_t)tmp && op->converter == 's' && !op->hyphen)
		op->rprint = ft_strndup(op->buffer, op->preci);
	else
		op->rprint = ft_strdup(op->buffer);
}

