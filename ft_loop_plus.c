/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:05:43 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/28 18:22:27 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_loop2(t_option *option, char *str, size_t i)
{
	option->flag = str[i];
	i += option->nflag;
	return (i);
}

size_t		ft_loop3(t_option *option, size_t i, va_list ap, char *str)
{
	ft_switch(option, ap, str, i);
	i++;
	ft_all_to_zero(option);
	return (i);
}

size_t		ft_loop4(t_option *option, char *fmt, size_t i)
{
	while (fmt[i])
	{
		if (fmt[i] == '%')
			break ;
		ft_putchar(fmt[i]);
		i++;
		option->rvalue++;
	}
	return (i);
}
