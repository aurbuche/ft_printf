/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:50:08 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 14:10:28 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_change(t_option *op, char **str, size_t i, va_list ap)
{
	int		tmp;

	// dprintf(1, "\nstr in\t: %s\n", (*str + i));
	tmp = 0;
	while ((*str)[i] && !ft_is_converter((*str)[i]))
	{
		if ((*str)[i] == '*' && op->percent)
		{
			tmp = va_arg(ap, int);
			*str = ft_insert(*str, ft_itoa(tmp), i, 1);
		}
		i++;
	}
	// dprintf(1, "\nstr out\t: %s\n", (*str));
}
