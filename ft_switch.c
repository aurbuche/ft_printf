/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:59:38 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/17 13:08:29 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_switch_continue(t_option *option, va_list ap)
{
	if (option->converter == '%')
	{
		ft_4_percent(option);
		return (1);
	}
	else if (option->converter == 'u')
	{
		ft_4_u(option, ap);
		return (1);
	}
	return (0);
}

int		ft_switch(t_option *option, va_list ap)
{
	if (option->converter == 'c' || option->converter == 's')
	{
		ft_4_alpha(option, ap);
		return (1);
	}
	else if (option->converter == 'd' || option->converter == 'i')
	{
		ft_4_di(option, ap);
		return (1);
	}
	else if (option->converter == 'p')
	{
		ft_4_p(option, ap);
		return (1);
	}
	else if (option->converter == 'x' || option->converter == 'X')
	{
		ft_4_x(option, ap);
		return (1);
	}
	else
		return (ft_switch_continue(option, ap));
	return (0);
}
