/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_p.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 13:42:22 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 15:54:30 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_p(t_option *option, va_list ap)
{
	char	*base;

	base = "0123456789abcdef";
	option->buffer = ft_itoa_p_base(va_arg(ap, long long), base);
	option->buffer = ft_strfjoin("0x", option->buffer, 2);
	if (option->width != NULL)
		ft_set_width(option);
	else
	{
		option->rprint = ft_strdup(option->buffer);
		option->rvalue = 1;
	}
	ft_display(option);
}
