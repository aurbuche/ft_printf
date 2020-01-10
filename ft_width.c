/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_width.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 13:35:44 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 16:46:26 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_width(t_option *option, va_list ap)
{
	int		tmp;
	int		i;

	tmp = va_arg(ap, int);
	i = 0;
	option->rprint = ft_strdup("999");
	while (tmp)
	{
		option->rprint[i] = ' ';
		tmp--;
		i++;
	}
	option->rvalue = ft_strlen(option->rprint);
}
