/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 16:22:14 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_is_flag(char fmt, size_t i)
{
	if ((i = 0) && (fmt == '0' || fmt == '.' || fmt == '*'
		|| fmt == '-'))
		return (1);
	else if ((i != 0) && (fmt == '.' || fmt == '*' || fmt == '-'))
		return (1);
	return (0);
}

char		ft_stock_flag(char *str, t_option option)
{
	char	*flag;

	flag = "-*.0";
	if ()
}
