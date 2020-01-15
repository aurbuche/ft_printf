/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_p.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 13:42:22 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:24:10 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_p(t_option *option, va_list ap)
{
	option->buffer = ft_itoa_p_base(va_arg(ap, long long), "0123456789abcdef");
	option->buffer = ft_strjoin("0x", option->buffer);
	if (option->width != NULL)
		ft_set_width(option);
	else
	{
		option->rprint = option->buffer;
		option->rvalue = 1;
	}
	ft_display(option);
}
