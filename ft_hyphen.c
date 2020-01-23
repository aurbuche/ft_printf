/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_hyphen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 10:19:40 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 14:13:43 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_hyphen(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	if (ft_strlen(option->buffer) >= option->hyphen)
		tmp = 0;
	else
	{
		tmp = option->hyphen - ft_strlen(option->rprint);
		option->buffer = malloc(sizeof(char) * (tmp + 1));
		while (i < tmp)
		{
			option->buffer[i] = ' ';
			i++;
		}
		option->buffer[i] = '\0';
		option->rprint = ft_strjoin(option->rprint, option->buffer);
	}
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

	buff = malloc(sizeof(char) * (ft_len_nb(str, i) + 1));
	option->nflag = ft_len_nb(str, i) + 1;
	j = 0;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	option->hyphen = ft_atoi(buff);
	option->h = 1;
	free(buff);
}
