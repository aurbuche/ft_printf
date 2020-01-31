/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_else.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 09:30:06 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 15:19:40 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_else(t_option *option, char *str, size_t i)
{
	ft_putchar(str[i]);
	option->rvalue++;
	i++;
	return (i);
}
