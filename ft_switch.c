/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_switch.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 15:59:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 16:24:40 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_switch(size_t c, t_option *option)
{
	if (c == 'c' || c == 's')
		ft_4_alpha(&option, c);
	if (c == 'd' || c == 'i')
		ft_4_digit(&option);
	if (c == 'u')
		ft_4_u(&option);
	if (c == 'p')
		ft_4_p(&option);
	if (c == 'x' || c == 'X')
		ft_4_x(&option, c);
}
