/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_percent.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 09:07:13 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 15:52:11 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_percent(t_option *option)
{
	option->percent = 1;
	option->rvalue++;
	ft_putchar('%');
}
