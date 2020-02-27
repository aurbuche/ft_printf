/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:50:08 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/27 17:27:58 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_change(char **str, size_t i, va_list ap)
{
	while ((*str)[i] && !ft_is_converter((*str)[i]))
	{
		if ((*str)[i] == '*')
			*str = ft_insert(*str, ft_itoa(va_arg(ap, int)), i, 1);
		i++;
	}
}
