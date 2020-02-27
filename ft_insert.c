/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:32:45 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/27 17:33:54 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_insert(char *src, char *insered, size_t n, int len)
{
	char	*dest;

	dest = ft_strndup(src, n);
	dest = ft_strfjoin(dest, insered, 1);
	dest = ft_strfjoin(dest, src + n + len, 1);
	return (dest);
}
