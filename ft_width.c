/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_width.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 13:35:44 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 16:06:18 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_width(t_option *option)
{
	size_t	tmp;

	tmp = ft_strlen(option->buffer);
	if (tmp > ft_strlen(option->width))
		option->rprint = ft_strdup(option->buffer);
	else
	{
		tmp = ft_strlen(option->width) - tmp;
		option->rprint = ft_strndup(option->width, tmp);
		option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
	}
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
	option->width = malloc(sizeof(char) * (tmp + 1));
	while (i < tmp)
	{
		option->width[i] = ' ';
		i++;
	}
	option->width[i] = '\0';
	option->flag = '*';
	option->nflag = 1;
	option->w = 1;
}
