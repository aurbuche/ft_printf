/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_field.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/28 11:35:31 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/03 15:35:15 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_field(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(option->buffer);

	if (option->lentot > tmp)
	{
		tmp = option->lentot - tmp;
		option->rprint = malloc(sizeof(char) * (option->lentot + 1));
		while (i < tmp)
		{
			option->rprint[i] = ' ';
			i++;
		}
		if (option->neg == 1)
		{
			option->rprint[i] = '-';
			i++;
		}
		option->rprint[i] = '\0';
		option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
	}
	else
		option->rprint = ft_strdup(option->buffer);
}

size_t		ft_size_field(t_option *option, char *str, size_t i)
{
	size_t		j;
	char		*buff;

	j = 0;
	if (!(buff = malloc(sizeof(char) * (ft_len_nb(str, i) + 1))))
		return (0);
	while (ft_isdigit(str[i]))
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	option->lentot = ft_atoi(buff);
	option->flag = 1;
	free(buff);
	return (i);
}
