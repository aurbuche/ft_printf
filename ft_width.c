/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_width.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 13:35:44 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/05 16:08:47 by aurbuche    ###    #+. /#+    ###.fr     */
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
		if ((option->w == -1) || (option->w == 1 && option->h == 1))
			option->rprint = ft_strfjoin(option->buffer, option->rprint, 2);
		else
			option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
	}
	if (option->neg)
		option->rprint[0] = '-';
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
	char	c;

	tmp = va_arg(ap, int);
	option->w = 1;
	if (tmp < 0)
	{
		option->w = -1;
		tmp = -tmp;
	}
	i = 0;
	c = ' ';
	if ((option->z && option->w == 1) || option->p)
	{
		// dprintf(1, "{%zu}", option->p);
		c = '0';
	}
	option->width = malloc(sizeof(char) * (tmp + 1));
	while (i < tmp)
	{
		option->width[i] = c;
		i++;
	}
	option->width[i] = '\0';
	// dprintf(1, "{%s}", option->width);
	option->flag = '*';
	option->nflag = 1;
}
