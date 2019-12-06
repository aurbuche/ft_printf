/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pf_4_s.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:43:52 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 16:45:44 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_4_s(t_option *option)
{
	option->buffer = va_arg(option->ap, char *);
	if (option->buffer == '\0')
		ft_putchar('\0');
	else
		ft_putstr(option->buffer);
}
