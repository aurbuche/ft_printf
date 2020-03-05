/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 13:35:44 by aurbuche          #+#    #+#             */
/*   Updated: 2020/03/05 13:49:21 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_width(t_option *op)
{
	size_t	tmp;

	tmp = ft_strlen(op->buffer);
	if (op->neg)
		op->buffer = ft_strfjoin("-", op->buffer, 2);
	if (tmp > ft_strlen(op->width))
	{
		op->rprint = ft_strdup(op->buffer);
	}
	else if ((op->p && op->wn == -1 && op->converter != 'p'
		&& op->converter != '%' && op->z) || (op->neg &&
		tmp == ft_strlen(op->width)))
		op->rprint = ft_strdup(op->buffer);
	else
	{
		tmp = ft_strlen(op->width) - tmp;
		if (op->neg && !op->z)
			tmp--;
		op->rprint = ft_strndup(op->width, tmp);
		if (op->buffer[0] == '0' && op->buffer[1] == '\0' && op->o)
		{
			free(op->buffer);
			op->buffer = ft_strdup(" ");
		}
		if ((op->wn == -1) || (op->w == 1 && op->h == 1)
			|| (op->h))
			op->rprint = ft_strfjoin(op->buffer, op->rprint, 2);
		else
			op->rprint = ft_strfjoin(op->rprint, op->buffer, 1);
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

void		ft_width_second(t_option *op, int *tmp)
{
	if (*tmp == 0)
	{
		*tmp = (int)ft_strlen(op->width);
		op->o = 1;
	}
}

void		ft_width(t_option *op, va_list ap)
{
	int		tmp;
	int		i;
	char	c;

	tmp = va_arg(ap, int);
	if (op->width && tmp == 0 && op->converter != 'x' && op->converter != 'X')
		ft_width_second(op, &tmp);
	op->w = 1;
	op->wn = 1;
	if (tmp < 0)
	{
		op->wn = -1;
		tmp = -tmp;
	}
	i = 0;
	c = ((op->z && op->w && op->wn == 1) || (op->p && !op->o)) ? '0' : ' ';
	op->width = malloc(sizeof(char) * (tmp + 1));
	while (i < tmp)
	{
		op->width[i] = c;
		i++;
	}
	op->width[i] = '\0';
	op->w = tmp;
	op->flag = '*';
	op->nflag = 1;
}
