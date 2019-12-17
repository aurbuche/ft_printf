/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_p.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 13:42:22 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 08:08:27 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

// void		ft_4_p(va_list ap, t_option *option)
// {
// 	char	*buff;

// 	buff = NULL;
// 	if (ft_verif_char('.', option->flags) && !va_arg(ap, long long))
// 		ft_putstr(ft_strdup("0x"));
// 	buff = ft_itoa_p_base(va_arg(ap, long long), "0123456789abcdef");
// 	if (ft_verif_char('0', option->flags))
// 	{
// 		free(buff);
// 		ft_putstr(ft_strdup("0x"));
// 	}
// 	buff = ft_strjoin("0x", buff);
// 	ft_putstr(buff);
// }

void		ft_4_p(va_list ap)
{
	char	*buff;

	buff = ft_itoa_p_base(va_arg(ap, long long), "0123456789abcdef");
	buff = ft_strjoin("0x", buff);
	ft_putstr(buff);
}
