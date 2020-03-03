/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:59:38 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/03 18:22:22 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_switch(t_option *op, va_list ap)
{
	if (op->preci != -1 || op->width != -1)
		op->flag = 1;
	if (op->converter == 's')
		ft_4_alpha(op, ap);
	else if (op->converter == 'c')
		ft_4_c(op, ap);
	if (op->converter == 'd' || op->converter == 'i')
		ft_4_di(op, ap);
	else if (op->converter == 'p')
		ft_4_p(op, ap);
	else if (op->converter == 'x' || op->converter == 'X')
		ft_4_x(op, ap);
	// else if (op->converter == '%')
	// 	ft_4_percent(op, str, i);
	else if (op->converter == 'u')
		ft_4_u(op, ap);
}
