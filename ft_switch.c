/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:59:38 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/19 16:14:16 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_switch_continue(t_option *option, va_list ap, char *str, int i)
{
	if (option->converter == '%')
	{
		ft_4_percent(option, str, i);
		return (1);
	}
	else if (option->converter == 'u')
	{
		ft_4_u(option, ap);
		return (1);
	}
	return (0);
}

int		ft_switch(t_option *option, va_list ap, char *str, int i)
{
	if (option->converter == 's')
	{
		ft_4_alpha(option, ap);
		return (1);
	}
	else if (option->converter == 'c')
	{
		ft_4_c(option, ap);
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
		return (ft_switch_continue(option, ap, str, i));
}
