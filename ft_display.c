/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/06 13:01:21 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/06 13:01:38 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_display(t_option *option)
{
	if (option->no == 1)
		ft_putchar('\0');
	else
		ft_putstr(option->rprint);
	option->rvalue += ft_strlen(option->rprint);
	option->flag = 0;
	free(option->buffer);
	free(option->rprint);
}
