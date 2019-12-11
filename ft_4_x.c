/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_x.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 16:20:05 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 16:53:20 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_4_x(t_option *option, char c)
{
	char	*base;
	int		n;

	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	n = va_arg(option->ap, int);
	return (ft_itoa_base(n, base));
}
