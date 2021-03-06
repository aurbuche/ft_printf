/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_p_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 11:24:01 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:47:00 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_p_base(unsigned long n, char *base)
{
	static char	buf[18];
	int			i;
	int			len;

	len = ft_strlen(base);
	i = 16;
	while (1)
	{
		buf[i--] = base[n % len];
		n /= len;
		if (n == 0)
			break ;
	}
	return (ft_strdup(buf + 1 + i));
}
