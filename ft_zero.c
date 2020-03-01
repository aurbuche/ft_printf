/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurelienbucher <aurelienbucher@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:15:59 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/01 21:18:21 by aurelienbuc      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_zero(t_option *op)
{
	size_t		tmp;
	size_t		i;
	char		c;

	i = 0;
	c = (op->z && !op->zero && op->p) ? ' ' : '0';
	tmp = ft_strlen(op->buffer);
	if (op->neg)
		tmp++;
	if (op->zero > tmp)
	{
		tmp = op->zero - tmp;
		op->rprint = malloc(sizeof(char) * (op->zero + 1));
		while (i < tmp)
		{
			op->rprint[i] = c;
			i++;
		}
		op->rprint[i] = '\0';
		op->rprint = ft_strfjoin(op->rprint, op->buffer, 1);
	}
	else
		op->rprint = ft_strdup(op->buffer);
}

void		ft_zero(t_option *op, char *str, size_t i)
{
	char	*buff;
	int		j;

	j = 0;
	buff = malloc(sizeof(char) * (ft_len_nb(str, i) + 1));
	op->nflag = ft_len_nb(str, i) + 1;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	op->flag = '0';
	op->zero = ft_atoi(buff);
	op->z = 1;
	free((char*)buff);
}
