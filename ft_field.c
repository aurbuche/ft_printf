/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_field.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:35:31 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/26 12:55:31 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_continue(t_option *option, size_t tmp, size_t i)
{
	tmp = option->lentot - tmp;
	option->rprint = malloc(sizeof(char) * (option->lentot + 1));
	while (i < tmp)
	{
		option->rprint[i] = ' ';
		i++;
	}
	option->rprint[i] = '\0';
	if (option->no)
		option->rprint[i - 1] = '\0';
	option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
}

void		ft_set_field(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(option->buffer);
	if (option->neg)
	{
		option->f = 1;
		option->buffer = ft_strfjoin("-", option->buffer, 2);
	}
	if (option->lentot >= tmp)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_continue(option, tmp, i);
	}
	else
		option->rprint = ft_strdup(option->buffer);
}

size_t		ft_size_field(t_option *option, char *str, size_t i)
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
	option->lentot = ft_atoi(buff);
	option->flag = 1;
	free(buff);
	return (i);
}
