/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_switch.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 15:59:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 13:45:36 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_switch(t_option *option, va_list ap)
{
	if (option->converter == 'c' || option->converter == 's')
	{
		ft_4_alpha(option, ap);
		return (1);
	}
	else if (option->converter == 'd' || option->converter == 'i'
			|| option->converter == 'u')
	{
		ft_4_digit(option, ap);
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
	else if (option->converter == '%')
		return (0);
	return (0);
}
