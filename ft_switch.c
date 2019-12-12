/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_switch.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 15:59:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:02:08 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_switch(size_t c, t_option *option, va_list ap)
{
	if (c == 'c' || c == 's')
		ft_4_alpha(option, c, ap);
	else if (c == 'd' || c == 'i' || c == 'u')
		ft_4_digit(option, c, ap);
	/*else if (c == 'p')
		ft_4_p(option);
	else if (c == 'x' || c == 'X')
		ft_4_x(option, c);*/
}
