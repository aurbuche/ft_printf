/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurelienbucher <aurelienbucher@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:42:44 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/01 21:34:51 by aurelienbuc      ###   ########lyon.fr   */
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
		&& option->preci == 0 && !option->h)
		option->buffer = ft_strdup("");
	else
	{
		if (!(option->buffer = ft_strdup(va_arg(ap, char *))))
			option->buffer = ft_strdup("(null)");
	}
	if (option->lentot > option->preci && option->preci != 0)
		ft_spe(option);
	else if (option->lentot < option->preci && option->lentot
		< ft_strlen(option->buffer) && !option->p && !option->h)
		option->rprint = ft_strndup(option->buffer, option->preci);
	else if (option->p == 1 && option->h == 0 && option->z == 0
		&& option->w == 0 && option->lentot == 0 && option->buffer)
		option->rprint = ft_strndup(option->buffer,
			option->preci < ft_strlen(option->buffer) ?
			option->preci : ft_strlen(option->buffer));
	else if (option->flag && option->flag != '%')
	{
		ft_set_flag(option);
	}
	else
		option->rprint = ft_strdup(option->buffer);
	ft_display(option);
}
