/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:40:35 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/10 14:42:43 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_free_struct(t_op *op, char *fmt)
{
	ft_delete(&fmt);
	free(op);
	ft_bzero(op, sizeof(t_op));
}
