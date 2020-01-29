/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_loop_plus.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/28 11:05:43 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 12:49:12 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_loop2(t_option *option, char *str, size_t i)
{
	option->flag = str[i];
	i += option->nflag;
	return (i);
}

size_t		ft_loop3(t_option *option, size_t i, va_list ap)
{
	ft_switch(option, ap);
	i++;
	ft_all_to_zero(option);
	return (i);
}
