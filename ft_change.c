/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:50:08 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/06 16:59:54 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_change(t_op *op, char **str, size_t i, va_list ap)
{
	char	*tmp;
	char	*wait;

	tmp = 0;
	while ((*str)[i] && !ft_is_converter((*str)[i]))
	{
		if ((*str)[i] == '*' && op->percent)
		{
			tmp = ft_itoa(va_arg(ap, int));
			wait = ft_insert(*str, tmp, i, 1);
			free(*str);
			*str = ft_strdup(wait);
			free(wait);
			free(tmp);
		}
		i++;
	}
}
