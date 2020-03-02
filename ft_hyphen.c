/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hyphen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:19:40 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/02 17:14:22 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_hyphen(t_option *op)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	if (ft_strlen(op->buffer) >= op->hyphen)
	{
		op->rprint = ft_strdup(op->buffer);
	}
	else
	{
		tmp = op->hyphen - ft_strlen(op->buffer);
		if (op->neg)
			tmp--;
		op->rprint = malloc(sizeof(char) * (tmp + 1));
		while (i < tmp)
		{
			op->rprint[i] = ' ';
			i++;
		}
		op->rprint[i] = '\0';
		if (op->no)
			op->rprint[i - 1] = '\0';
		op->rprint = ft_strfjoin(op->buffer, op->rprint, 2);
	}
}

int				ft_len_nb(char *str, int i)
{
	int		nb;
	// int		tmp;

	nb = 0;
	// tmp = 0;
	// if (str[i] == '-')
	// {
	// 	tmp = 1;
	// 	i++;
	// }
	while (ft_isdigit(str[i]))
	{
		nb++;
		i++;
	}
	// if (tmp)
	// 	nb++;
	return (nb);
}

void			ft_hyphen(t_option *op, char *str, int i)
{
	int		j;
	char	*buff;

	buff = malloc(sizeof(char) * (ft_len_nb(str, i) + 1));
	op->nflag = ft_len_nb(str, i) + 1;
	j = 0;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	op->hyphen = ft_atoi(buff);
	op->h = 1;
	free(buff);
}
