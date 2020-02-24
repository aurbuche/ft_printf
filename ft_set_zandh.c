/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_zandh.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 10:05:32 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/24 10:14:58 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_zandh(t_option *option)
{
	if (option->z && option->zero != 0)
		ft_set_zero(option);
	if (option->h && option->hyphen != 0)
		ft_set_hyphen(option);
}
