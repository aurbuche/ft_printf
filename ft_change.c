/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:50:08 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 18:00:08 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_change(t_option *op, char **str, size_t i, va_list ap)
{
	int		tmp;

	tmp = 0;
	while ((*str)[i] && !ft_is_converter((*str)[i]))
	{
		if ((*str)[i] == '*')
		{
			tmp = va_arg(ap, int);
			if (tmp < 0 && (*str)[i - 1] == '.')
				*str = ft_insert(*str, "", i - 1, 2);
			else
				*str = ft_insert(*str, ft_itoa(tmp), i, 1);
		}
		op->w = 0;
		i++;
	}
}
