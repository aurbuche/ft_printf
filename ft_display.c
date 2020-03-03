/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:01:21 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 11:18:49 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_display(t_option *option)
{
	if (option->rprint == NULL)
	{
		ft_putstr("(null)");
		option->size += 6;
	}
	else if (option->rprint)
	{
		ft_putstr(option->rprint);
		option->size += ft_strlen(option->rprint);
	}
	option->flag = 0;
	free(option->buffer);
	free(option->rprint);
}
