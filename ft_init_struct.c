/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:28:09 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/02 10:31:45 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_continue(t_option *option)
{
	option->neg = 0;
	option->wn = 1;
	option->j = 0;
	option->i = 0;
	option->f = 0;
	option->o = 0;
	option->zero = 0;
}

t_option		*ft_init_struct(void)
{
	t_option	*option;

	if (!(option = malloc(sizeof(t_option))))
		return (NULL);
	option->rprint = NULL;
	option->width = NULL;
	option->preci = 0;
	option->buffer = NULL;
	option->lentot = 0;
	option->hyphen = 0;
	option->flag = 0;
	option->nflag = 0;
	option->percent = 1;
	option->rvalue = 0;
	option->nflag = 0;
	option->no = 0;
	option->w = 0;
	option->p = 0;
	option->h = 0;
	option->z = 0;
	ft_continue(option);
	return (option);
}
