/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_alpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 17:09:20 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_display(t_option *option)
{
	if (option->rprint == '\0')
	{
		ft_putstr("(null)");
		option->rvalue = 6;
	}
	else
	{
		ft_putstr(option->rprint);
		option->rvalue += ft_strlen(option->rprint);
	}
}

void		ft_4_alpha(t_option *option, va_list ap)
{
	if (option->converter == 'c')
	{
		option->buffer = ft_ctos(va_arg(ap, int));
		if (option->width != NULL)
			option->rprint = ft_strnjoin(option->width,
					option->buffer, ft_strlen(option->width) - 1);
		else
			option->rprint = option->buffer;
	}
	else
	{
		option->buffer = va_arg(ap, char *);
		if (option->width != NULL)
			ft_set_width(option);
		else
			option->rprint = option->buffer;
	}
	ft_display(option);
}
