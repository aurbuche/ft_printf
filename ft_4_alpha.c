/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_alpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/11 16:49:41 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_alpha(t_option *option, va_list ap)
{
	if (option->p == 1 && option->converter == 's'
		&& option->preci == 0)
		option->buffer = ft_strdup("");
	else if (option->converter == 'c')
		option->buffer = ft_ctos(va_arg(ap, int), option);
	else
		option->buffer = ft_strdup(va_arg(ap, char *));
	if (option->p == 1 && option->h == 0 && option->z == 0
		&& option->w == 0 && option->lentot == 0 && option->buffer)
	{
		if (option->preci < ft_strlen(option->buffer))
			option->rprint = ft_strndup(option->buffer, option->preci);
		else
			option->rprint = ft_strdup(option->buffer);
	}
	else if (option->flag && option->flag != '%' && option->buffer)
	{
		// dprintf(1, "{%d}", 5);
		ft_set_flag(option);
	}
	else if (option->buffer)
	{
		if (option->buffer != NULL)
			option->rprint = ft_strdup(option->buffer);
		else
			option->rprint = ft_strdup("\0");
	}
	ft_display(option);
}
