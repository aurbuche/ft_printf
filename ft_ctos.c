/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:50:30 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/19 16:24:50 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ctos(char c)
{
	char	*str;

	if (!c)
	{
		return (ft_strdup("\0"));
	}
	if (!(str = ft_strdup("  ")))
		return (0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
