/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_hyphen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 10:19:40 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:34:11 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_hyphen(t_option *option)
{
	size_t		tmp;

	if (ft_strlen(option->buffer) > option->hyphen)
		tmp = ft_strlen(option->buffer) - option->hyphen;
	else
		tmp = option->hyphen - ft_strlen(option->buffer);
	option->rprint = option->buffer;
	while (tmp)
	{
		*option->buffer = ' ';
		option->buffer++;
		tmp--;
	}
	option->rprint = ft_strjoin(option->rprint, option->buffer);
}

int				ft_len_nb(char *str, int i)
{
	int		nb;

	nb = 0;
	while (ft_isdigit(str[i]))
	{
		nb++;
		i++;
	}
	return (nb);
}

void			ft_hyphen(t_option *option, char *str, int i)
{
	int		j;
	char	*buff;

	buff = malloc(sizeof(char) * ft_len_nb(str, i) + 1);
	j = 0;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	option->hyphen = ft_atoi(buff);
	dprintf(1, "(%zu)", option->hyphen);
	option->nflag = ft_len_nb(str, i) + 1;
}
