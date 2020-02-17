/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_til.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:20:37 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/17 13:08:41 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_write_til_percent2(char *fmt, size_t j, size_t i)
{
	while (j <= i)
	{
		ft_putchar(fmt[j]);
		j++;
	}
}

void		ft_write_til_percent(char *fmt, size_t i)
{
	size_t	n;

	n = 0;
	while (n < i)
	{
		ft_putchar(fmt[n]);
		n++;
	}
}
