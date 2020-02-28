/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hyphen_preci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:18:45 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 17:36:12 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_ph2(t_option *op, char *buff, size_t tmp, size_t i)
{
	if (op->p && !op->preci && !ft_strcmp("0", op->buffer))
	{
		free(op->rprint);
		op->rprint = ft_strdup(" ");
	}
	buff = ft_strdup(op->rprint);
	if (op->hyphen > ft_strlen(buff))
	{
		if (op->neg)
			op->hyphen--;
		free(op->rprint);
		i = 0;
		tmp = op->hyphen - ft_strlen(buff);
		op->rprint = malloc(sizeof(char) * (tmp + 1));
		while (i < tmp)
		{
			op->rprint[i] = ' ';
			i++;
		}
		op->rprint[i] = '\0';
		op->rprint = ft_strfjoin(buff, op->rprint, 3);
	}
}

void		ft_set_hyphen_preci(t_option *op)
{
	char		*buff;
	size_t		tmp;
	size_t		i;

	buff = NULL;
	i = 0;
	tmp = 0;
	if (op->converter != 's')
	{
		ft_set_precision(op);
	}
	else
	{
		op->rprint = malloc(sizeof(char) * (op->preci + 1));
		while (i < op->preci)
		{
			op->rprint[i] = op->buffer[i];
			i++;
		}
	}
	ft_set_ph2(op, buff, tmp, i);
}
