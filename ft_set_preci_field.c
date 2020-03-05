/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_preci_field.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:39:48 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/05 17:01:41 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_preci_field(t_option *op)
{
	if (op->zero && op->preci >= 0)
		op->zero = 0;
	if (op->preci != -1 && op->converter == 's' && op->width == -1)
	{
		op->rprint = ft_strndup(op->buffer, op->preci);
	}
	else
	{
		ft_set_precision(op);
	}
	if (op->neg)
	{
		op->rprint = ft_strfjoin("-", op->rprint, 2);
		op->neg = 0;
	}
	if (op->width)
	{
		if (op->preci != -1)
		{
			free(op->buffer);
			op->buffer = ft_strdup(op->rprint);
		}
		ft_set_field(op);
	}
}

// void		ft_one(t_option *option, char *s1, size_t i, size_t tmp)
// {
// 	if (option->preci > ft_strlen(option->buffer))
// 		option->lentot -= option->preci;
// 	else if (ft_strlen(option->buffer) > option->lentot)
// 		option->lentot = ft_strlen(option->buffer);
// 	else
// 		option->lentot -= ft_strlen(option->buffer);
// 	s1 = malloc(sizeof(char) * (option->lentot + 1));
// 	if (tmp > ft_strlen(option->buffer))
// 	{
// 		while (i < option->lentot)
// 		{
// 			s1[i] = ' ';
// 			i++;
// 		}
// 	}
// 	s1[i] = '\0';
// 	i = (int)ft_atoi(option->buffer);
// 	if (i == 0 && option->preci == 0 && option->converter != 's'
// 		&& option->converter != 'x' && option->converter != 'X')
// 		option->rprint = ft_strdup(" ");
// 	else
// 		ft_set_precision(option);
// 	option->rprint = ft_strfjoin(s1, option->rprint, 3);
// }

// void		ft_next(t_option *option, char *s1, size_t i)
// {
// 	i = 0;
// 	if (option->lentot > option->preci ||
// 		(option->lentot > ft_strlen(option->buffer) && option->converter == 's')
// 			|| ft_strlen(option->buffer) == option->lentot)
// 		ft_set_field(option);
// 	else if (option->lentot == option->preci)
// 		ft_set_precision(option);
// 	else
// 		option->rprint = ft_strdup(option->buffer);
// 	s1 = NULL;
// }
