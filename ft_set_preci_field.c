/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_preci_field.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:39:48 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/19 09:54:05 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_one(t_option *option, char *s1, size_t i, size_t tmp)
{
	if (option->preci > ft_strlen(option->buffer))
		option->lentot -= option->preci;
	else if (ft_strlen(option->buffer) > option->lentot)
		option->lentot = ft_strlen(option->buffer);
	else
		option->lentot -= ft_strlen(option->buffer);
	s1 = malloc(sizeof(char) * (option->lentot + 1));
	if (tmp > ft_strlen(option->buffer))
	{
		while (i < option->lentot)
		{
			s1[i] = ' ';
			i++;
		}
	}
	s1[i] = '\0';
	i = (int)ft_atoi(option->buffer);
	if (i == 0 && option->preci == 0 && option->converter != 's'
		&& option->converter != 'x' && option->converter != 'X')
		option->rprint = ft_strdup(" ");
	else
		ft_set_precision(option);
	option->rprint = ft_strfjoin(s1, option->rprint, 3);
}

void		ft_next(t_option *option, char *s1, size_t i)
{
	i = 0;
	if (option->lentot > option->preci ||
		(option->lentot > ft_strlen(option->buffer) && option->converter == 's')
			|| ft_strlen(option->buffer) == option->lentot)
		ft_set_field(option);
	else if (option->lentot == option->preci)
		ft_set_precision(option);
	else
		option->rprint = ft_strdup(option->buffer);
	s1 = NULL;
}

void		ft_set_preci_field(t_option *option, int i)
{
	if (option->neg && (option->preci == 0 || option->preci == 1))
	{
		i = -(int)ft_atoi(option->buffer);
		free(option->buffer);
		option->buffer = ft_itoa(i);
		option->neg = 0;
	}
	i = 0;
	if (option->i == 0 && option->preci == 0 && option->j == 0
		&& (option->converter != 'c' && option->converter != 's'))
	{
		free(option->buffer);
		option->buffer = ft_strdup(" ");
	}
	if (option->lentot > option->preci)
	{
		// dprintf(1, "{%d}", 9);
		if (option->neg)
			option->lentot--;
		ft_one(option, NULL, i, option->lentot);
	}
	else if (option->lentot < option->preci && option->converter != 's')
		ft_set_precision(option);
	else
	{
		ft_next(option, NULL, i);
	}
}
