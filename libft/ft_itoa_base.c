/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 13:24:02 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 09:37:15 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(unsigned int n, char *base)
{
	static char	buf[12];
	int			i;
	int			len;

	len = ft_strlen(base);
	i = 10;
	while (1)
	{
		buf[i--] = base[n % len];
		n /= len;
		if (n == 0)
			break ;
	}
	return (ft_strdup(buf + 1 + i));
}
