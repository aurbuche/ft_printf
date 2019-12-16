/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write_til_percent.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 12:20:37 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 08:08:12 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_write_til_percent(char *fmt, size_t i)
{
	size_t	n;

	n = 0;
	while (n <= i)
		ft_putchar(fmt[n++]);
}
