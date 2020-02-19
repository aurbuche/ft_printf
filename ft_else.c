/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_else.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 09:30:06 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/19 09:49:10 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_else(t_option *option, size_t i)
{
	option->npercent++;
	if (option->npercent % 2 == 0)
	{
		option->rvalue++;
		option->npercent = 1;
	}
	i++;
	return (i);
}
