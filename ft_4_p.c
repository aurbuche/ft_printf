/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_p.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 13:42:22 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 12:54:33 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_p(t_option *option, va_list ap)
{
	char	*buff;

	option->accu = 1;
	buff = ft_itoa_p_base(va_arg(ap, long long), "0123456789abcdef");
	buff = ft_strjoin("0x", buff);
	ft_putstr(buff);
}
