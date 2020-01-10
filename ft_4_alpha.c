/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_alpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:38:28 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 16:37:22 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_alpha(t_option *option, va_list ap)
{
	if (option->converter == 'c')
	{
		//dprintf(1, "--%s--\n", option->rprint);
		option->rprint = ft_strjoin(option->rprint, ft_ctos(va_arg(ap, int)));
		//dprintf(1, "[%s]", option->rprint);
		//ft_putstr(option->rprint);
		option->rvalue = ft_strlen(option->rprint);
	}
	else
	{
		option->rprint = ft_strjoin(option->rprint, va_arg(ap, char *));
		if (option->rprint == '\0')
		{
			ft_putstr("(null)");
			option->rvalue = 6;
		}
		else
		{
			ft_putstr(option->rprint);
			option->rvalue = ft_strlen(option->rprint);
		}
	}
}
