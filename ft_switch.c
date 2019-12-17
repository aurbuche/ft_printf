/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_switch.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 15:59:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 15:42:56 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_switch(t_option *option, va_list ap)
{
	if (option->converter == 'c' || option->converter == 's')
		ft_4_alpha(option, ap);
	else if (option->converter == 'd' || option->converter == 'i'
			|| option->converter == 'u')
		ft_4_digit(option, ap);
	else if (option->converter == 'p')
		ft_4_p(ap);
	else if (option->converter == 'x' || option->converter == 'X')
		ft_4_x(option, ap);
}
