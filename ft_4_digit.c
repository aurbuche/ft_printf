/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_digit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/28 15:39:39 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_digit(t_option *option, va_list ap)
{
	char	*base;

	base = "0123456789";
	if (option->converter == 'u')
	{
		option->buffer = ft_itoa_base(va_arg(ap, unsigned int), base);
		if (option->flag != 0)
			ft_set_flag(option);
		else
			option->rprint = ft_strdup(option->buffer);
	}
	else
	{
		option->buffer = ft_itoa(va_arg(ap, int));
		if (option->flag != 0)
			ft_set_flag(option);
		else
			option->rprint = ft_strdup(option->buffer);
	}
	ft_display(option);
}
