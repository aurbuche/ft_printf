/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_pwz.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:30:38 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/26 09:32:37 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_pwz(t_option *option)
{
	if (!option->preci && !option->zero)
	{
		ft_set_width(option);
	}
}
