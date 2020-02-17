/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:17:11 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/17 10:20:57 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;

	src = s;
	while (n)
	{
		if (*src == c)
			return ((char*)src);
		src++;
		n--;
	}
	return (NULL);
}
