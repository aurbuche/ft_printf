/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:01:21 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/27 17:26:56 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_display(t_option *option)
{
	if (option->rprint == NULL)
	{
		ft_putstr("(null)");
		option->rvalue += 6;
	}
	else if (option->no == 1 && !option->flag)
	{
		option->rvalue++;
		ft_putchar('\0');
	}
	else if (option->rprint)
	{
		ft_putstr(option->rprint);
		option->rvalue += ft_strlen(option->rprint);
		if (option->no)
			option->rvalue++;
	}
	option->flag = 0;
	free(option->buffer);
	free(option->rprint);
}
