/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hyphen_preci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:18:45 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/17 17:41:42 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_hyphen_preci(t_option *option)
{
	char		*buff;
	size_t		tmp;
	size_t		i;

	buff = NULL;
	i = 0;
	if (option->converter != 's')
		ft_set_precision(option);
	else
	{
		option->rprint = malloc(sizeof(char) * (option->preci + 1));
		while (i < option->preci)
		{
			option->rprint[i] = option->buffer[i];
			i++;
		}
	}
	if (option->p && option->preci == 0 && !ft_strcmp("0", option->buffer))
	{
		free(option->rprint);
		option->rprint = ft_strdup(" ");
	}

	buff = ft_strdup(option->rprint);
	if (option->hyphen > ft_strlen(buff))
	{
		if (option->neg)
			option->hyphen--;
		free(option->rprint);
		i = 0;
		tmp = option->hyphen - ft_strlen(buff);
		option->rprint = malloc(sizeof(char) * (tmp + 1));
		while (i < tmp)
		{
			option->rprint[i] = ' ';
			i++;
		}
		option->rprint[i] = '\0';
		option->rprint = ft_strfjoin(buff, option->rprint, 3);
	}
}
