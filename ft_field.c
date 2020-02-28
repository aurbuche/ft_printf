/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_field.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:35:31 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 16:29:16 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_continue(t_option *op, size_t tmp, size_t i)
{
	char	c;

	c = (op->lentot && op->preci && op->preci < 0) ? '0' : ' ';
	tmp = op->lentot - tmp;
	op->rprint = malloc(sizeof(char) * (op->lentot + 1));
	while (i < tmp)
	{
		op->rprint[i] = c;
		i++;
	}
	op->rprint[i] = '\0';
	if (op->no)
		op->rprint[i - 1] = '\0';
	if (op->buffer[0] == '0' && op->buffer[1] == '\0' && op->p && !op->preci)
		op->buffer[0] = ' ';
	op->rprint = ft_strfjoin(op->rprint, op->buffer, 1);
}

void		ft_set_field(t_option *op)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(op->buffer);
	if (op->neg)
	{
		op->f = 1;
		op->buffer = ft_strfjoin("-", op->buffer, 2);
	}
	if (op->lentot >= tmp)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_continue(op, tmp, i);
	}
	else
		op->rprint = ft_strdup(op->buffer);
}

size_t		ft_size_field(t_option *op, char *str, size_t i)
{
	size_t		j;
	char		*buff;

	j = 0;
	if (!(buff = malloc(sizeof(char) * (ft_len_nb(str, i) + 1))))
		return (0);
	while (ft_isdigit(str[i]))
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	op->lentot = ft_atoi(buff);
	op->flag = 1;
	free(buff);
	return (i);
}
