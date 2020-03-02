/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:10:07 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/02 17:25:03 by aurbuche         ###   ########lyon.fr   */
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
	if (op->lentot && op->converter == 's')
		c = ' ';
	if (ft_atoi(op->buffer) == 0 && op->preci == 0 &&
		(op->converter == 'd' || op->converter == 'i')
		&& !op->h && !op->z && !op->lentot)
	{
		free(op->buffer);
		op->buffer = ft_strdup("");
	}
	if (op->preci > tmp)
		ft_set_precinext(op, tmp, i, c);
	else if (op->preci == op->lentot && op->converter == 's')
		op->rprint = ft_strndup(op->buffer, op->preci);
	else
		op->rprint = ft_strdup(op->buffer);
}

void			ft_precision(t_option *op, char *str, size_t i)
{
	op->flag = '.';
	// dprintf(1, "str in\t: %s\n", (str) + i);
	op->nflag = ft_len_nb(str, i) + 1;
	if (str[i] == '-')
		op->is_a_negative_precision = 1;
	i += op->is_a_negative_precision;
	op->preci = ft_atoi(str + i);
	// dprintf(1, "buff\t: %zu\n", op->preci);
	op->p = 1;
}
