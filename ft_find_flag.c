/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:36:14 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_find_flag(char *str, size_t i, t_option *option, va_list ap)
{
	if (str[i] == '*')
	{
		ft_width(option, ap);
		return (1);
	}
	else if (str[i] == '-')
	{
		ft_hyphen(option, str, i + 1);
		return (1);
	}
	if (str[i] == '.')
	{
		ft_precision(option, str, i + 1);
		return (1);
	}
	return (0);
}
