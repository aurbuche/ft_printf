/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:42:44 by aurbuche          #+#    #+#             */
/*   Updated: 2020/02/18 09:27:44 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_spe(t_option *option)
{
	char		*s1;
	size_t		i;

	i = 0;
	s1 = malloc(sizeof(char) * (option->lentot + 1));
	option->rprint = ft_strndup(option->buffer, option->preci);
	while (i < (option->lentot - option->preci))
	{
		s1[i] = ' ';
		i++;
	}
	s1[i] = '\0';
	option->rprint = ft_strfjoin(s1, option->rprint, 3);
}

void		ft_4_alpha(t_option *option, va_list ap)
{
	if (option->p == 1 && option->converter == 's'
		&& option->preci == 0)
		option->buffer = ft_strdup("");
	else if (option->converter == 'c')
		option->buffer = ft_ctos(va_arg(ap, int), option);
	else
		option->buffer = ft_strdup(va_arg(ap, char *));
	if (option->lentot > option->preci && option->preci != 0)
		ft_spe(option);
	else if (option->lentot < option->preci
		&& option->lentot < ft_strlen(option->buffer) && !option->p && !option->h)
	{
		option->rprint = ft_strndup(option->buffer, option->preci);
	}
	else if (option->p == 1 && option->h == 0 && option->z == 0
		&& option->w == 0 && option->lentot == 0 && option->buffer)
	{
		if (option->preci < ft_strlen(option->buffer))
			option->rprint = ft_strndup(option->buffer, option->preci);
		else
			option->rprint = ft_strdup(option->buffer);
	}
	else if (option->flag && option->flag != '%' && option->buffer)
	{
		ft_set_flag(option);
	}
	else if (option->buffer)
	{
		if (option->buffer != NULL)
			option->rprint = ft_strdup(option->buffer);
		else
			option->rprint = ft_strdup("\0");
	}
	ft_display(option);
}
