/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 15:40:47 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/19 11:20:16 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_find_flag(char *str, size_t i, t_option *option, va_list ap)
{
	if (str[i] == '*')
	{
		ft_width(option, ap);
		return (1);
	}
	else if (str[i] == '-')
	{
		ft_hyphen(option, str, i + 1);
		return (1);
	}
	else if (str[i] == '.')
	{
		ft_precision(option, str, i + 1);
		return (1);
	}
	else if (str[i] == '0' && str[i - 1] == '%')
	{
		ft_zero(option, str, i + 1);
		return (1);
	}
	return (0);
}
