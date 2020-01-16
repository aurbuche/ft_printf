/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_x.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 16:20:05 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 09:56:26 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_x(t_option *option, va_list ap)
{
	char	*base;

	base = "0123456789abcdef";
	if (option->converter == 'X')
		base = "0123456789ABCDEF";
	option->buffer = ft_itoa_base(va_arg(ap, long long), base);
	if (option->flag != 0)
		ft_set_flag(option);
	else
	{
		option->rprint = option->buffer;
		option->rvalue = 1;
	}
	ft_display(option);
}
