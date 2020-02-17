/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 13:42:22 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/17 13:06:23 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_p(t_option *option, va_list ap)
{
	char			*base;
	unsigned long	tmp;

	tmp = va_arg(ap, long long);
	base = "0123456789abcdef";
	option->buffer = ft_itoa_p_base(tmp, base);
	if (option->p && tmp == 0)
		option->buffer = ft_strdup("0x");
	else
		option->buffer = ft_strfjoin("0x", option->buffer, 2);
	if (option->flag != 0)
		ft_set_flag(option);
	else
		option->rprint = ft_strdup(option->buffer);
	ft_display(option);
}
