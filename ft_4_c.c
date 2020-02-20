/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:00:04 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/20 13:43:02 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_c(t_option *option, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	if (!c)
		option->no = 1;
	option->buffer = ft_ctos(c);
	if (option->lentot > option->preci && option->preci != 0)
		ft_spe(option);
	else if (option->lentot < option->preci && option->lentot
		< ft_strlen(option->buffer) && !option->p && !option->h)
		option->rprint = ft_strndup(option->buffer, option->preci);
	else if (option->p == 1 && option->h == 0 && option->z == 0
		&& option->w == 0 && option->lentot == 0 && option->buffer)
	{
		if (option->preci < ft_strlen(option->buffer))
			option->rprint = ft_strndup(option->buffer, option->preci);
		else
			option->rprint = ft_strdup(option->buffer);
	}
	else if (option->flag && option->converter != '%' && option->buffer)
	{
		ft_set_flag(option);
	}
	else if (option->buffer)
	{
		if (option->buffer != NULL)
			option->rprint = ft_strdup(option->buffer);
		else
			option->rprint = ft_strdup("\0");
	}
	ft_display(option);
}