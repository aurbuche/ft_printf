/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:26:48 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:47:03 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_isn(int *n, int *sign)
{
	if (*n < 0)
	{
		*sign = 1;
		*n = -*n;
	}
}

char			*ft_itoa(int n)
{
	int		tmp;
	int		sign;
	int		len;
	char	*str;

	sign = 0;
	tmp = n;
	len = 2;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_isn(&n, &sign);
	while (tmp /= 10)
		len++;
	len = len + sign;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
