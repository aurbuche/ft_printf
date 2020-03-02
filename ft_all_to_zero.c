/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_to_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:19:04 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/02 10:32:36 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_all_to_zero(t_option *option)
{
	option->lentot = 0;
	option->hyphen = 0;
	option->flag = 0;
	option->nflag = 0;
	option->percent = 0;
	option->nflag = 0;
	option->no = 0;
	option->p = 0;
	option->h = 0;
	option->z = 0;
	option->preci = 0;
	option->neg = 0;
	option->j = 0;
	option->i = 0;
	option->f = 0;
	option->o = 0;
	option->zero = 0;
}
