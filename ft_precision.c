/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:10:07 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/24 11:29:00 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_precision(t_option *option)
{
	size_t		tmp;
	size_t		i;
	char		c;

	i = 0;
	tmp = ft_strlen(option->buffer);
	c = '0';
	if (option->lentot && option->converter == 's')
		c = ' ';
	if (ft_atoi(option->buffer) == 0 && option->preci == 0 &&
		(option->converter == 'd' || option->converter == 'i'))
	{
		free(option->buffer);
		option->buffer = ft_strdup("");
	}
	if (option->preci > tmp)
	{
		tmp = option->preci - tmp;
		option->rprint = malloc(sizeof(char) * (option->preci + 1));
		while (i < tmp)
		{
			option->rprint[i] = c;
			i++;
		}
		option->rprint[i] = '\0';
		option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
	}
	else
		option->rprint = ft_strdup(option->buffer);
}

void			ft_precision(t_option *option, char *str, size_t i)
{
	char		*buff;
	int			j;

	j = 0;
	buff = malloc(sizeof(char) * ft_len_nb(str, i) + 1);
	option->nflag = ft_len_nb(str, i) + 1;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	option->flag = '.';
	option->preci = ft_atoi(buff);
	option->p = 1;
	free(buff);
}
