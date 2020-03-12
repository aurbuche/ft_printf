/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:50:30 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/12 14:44:15 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ctos(char c)
{
	char	*str;

	if (!(str = ft_strdup("  ")))
		return (0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
