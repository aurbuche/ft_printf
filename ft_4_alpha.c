/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_alpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/28 15:00:35 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_display(t_option *option)
{
	if (option->rprint == '\0')
		option->rprint = NULL;
	ft_putstr(option->rprint);
	option->rvalue += ft_strlen(option->rprint);
	option->flag = 0;
	free(option->buffer);
	free(option->rprint);
}

void		ft_4_alpha(t_option *option, va_list ap)
{
	if (option->converter == 'c')
		option->buffer = ft_ctos(va_arg(ap, int));
	else
		option->buffer = ft_strdup(va_arg(ap, char *));
	if (option->flag != 0 && option->flag != '.' && option->flag != '%')
		ft_set_flag(option);
	else
	{
		if (option->buffer != NULL)
			option->rprint = ft_strdup(option->buffer);
		else
			option->rprint = ft_strdup("(null)");
	}
	ft_display(option);
}
