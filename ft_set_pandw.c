/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_pandw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:59:14 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/24 14:01:21 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_pandw(t_option *option)
{
	// dprintf(1, "{%zu}", option->width);
	if ((option->converter == 'd' || option->converter == 'i')
		&& !option->preci && option->p && !option->w)
	{
		free(option->buffer);
		option->buffer = ft_strdup("");
	}
	if (option->width)
	{
		ft_set_width(option);
	}
}
