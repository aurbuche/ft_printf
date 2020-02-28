/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:10:07 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 15:10:04 by aurbuche         ###   ########lyon.fr   */
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
	else
		op->rprint = ft_strdup(op->buffer);
}

void			ft_precision(t_option *op, char *str, size_t i)
{
	char		*buff;
	int			j;

	j = 0;
	buff = malloc(sizeof(char) * ft_len_nb(str, i) + 1);
	op->nflag = ft_len_nb(str, i) + 1;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	op->flag = '.';
	op->preci = ft_atoi(buff);
	op->p = 1;
	free(buff);
}
