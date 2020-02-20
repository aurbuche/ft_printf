/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:07:13 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/20 12:54:25 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *option, char *str, int i)
{
	char	*s1;

	s1 = ft_strdup(ft_ctos(str[i + 1]));
	option->buffer = ft_ctos(str[i]);
	if (option->h && option->hyphen > 1)
		ft_set_hyphen(option);
	else if (option->lentot)
		ft_set_field(option);
	else
		option->rprint = ft_strdup(option->buffer);
	option->percent = 1;
	ft_display(option);
}
