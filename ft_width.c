/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_width.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 13:35:44 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 18:31:08 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_width(t_option *option)
{
	size_t	tmp;

	tmp = ft_strlen(option->buffer);
	if ((ft_strlen(option->width)) < tmp)
		option->rprint = option->buffer;
	else
		option->rprint = ft_strnjoin(option->width, option->buffer,
			(ft_strlen(option->width) - tmp));
}

int			ft_len(int i)
{
	int		len;

	len = 0;
	if (0 <= len && len <= 9)
		return (1);
	while (i > 0)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

void		ft_width(t_option *option, va_list ap)
{
	int		tmp;
	int		i;

	tmp = va_arg(ap, int);
	i = 0;
	option->width = malloc(sizeof(char) * tmp);
	while (i < tmp)
	{
		option->width[i] = ' ';
		i++;
	}
}
