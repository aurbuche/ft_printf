/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_to_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:19:04 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/05 13:48:28 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_all_to_zero(t_option *op)
{
	op->flag = 0;
	op->percent = 0;
	op->preci = 0;
	op->neg = 0;
	op->zero = 0;
	op->preci = -1;
	op->width = -1;
	op->converter = 0;
	op->is_a_negative_precision = 0;
	op->is_a_negative_width = 0;
}
