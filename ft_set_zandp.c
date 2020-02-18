/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_zandp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:14:07 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/18 14:28:16 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_zandp(t_option *option)
{
	char	*s1;
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = 0;
	if (option->neg && (option->converter == 'd'
		|| option->converter == 'i') && option->preci <= 1)
	{
		i = -(int)ft_atoi(option->buffer);
		free(option->buffer);
		option->buffer = ft_itoa(i);
		option->neg = 0;
		i = 0;
	}
	if (!ft_strcmp(option->buffer, "0") && option->preci == 0)
	{
		free(option->buffer);
		option->buffer = ft_strdup(" ");
	}
	ft_set_precision(option);
	if (option->zero > ft_strlen(option->rprint))
		tmp = option->zero - ft_strlen(option->rprint);
	if (option->neg && tmp > 0)
		tmp--;
	s1 = malloc(sizeof(char) * (tmp + 1));
	while (i < tmp)
	{
		s1[i] = ' ';
		i++;
	}
	s1[i] = '\0';
	option->rprint = ft_strfjoin(s1, option->rprint, 3);
}
