/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_zandw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:43:42 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/26 16:05:32 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_zandw(t_option *option)
{
	size_t		tmp;

	tmp = ft_strlen(option->buffer);
	if (option->neg)
		tmp++;
	if (tmp > ft_strlen(option->width))
		option->rprint = ft_strdup(option->buffer);
	else if ((option->p && option->wn == -1) ||
		(option->neg && tmp == ft_strlen(option->width)))
		option->rprint = ft_strdup(option->buffer);
	else
	{
		tmp = ft_strlen(option->width) - tmp;
		if (option->neg && !option->z)
			tmp--;
		option->rprint = ft_strndup(option->width, tmp);
		if ((option->wn == -1) || (option->w == 1 && option->h == 1)
			|| (option->h && !option->hyphen))
			option->rprint = ft_strfjoin(option->buffer, option->rprint, 2);
		else
			option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
	}
	if (option->neg)
		option->rprint = ft_strfjoin("-", option->rprint, 2);
}
