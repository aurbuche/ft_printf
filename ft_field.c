/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_field.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/28 11:35:31 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/10 17:57:19 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_continue(t_option *option, size_t tmp, size_t i)
{
	tmp = option->lentot - tmp;
	option->rprint = malloc(sizeof(char) * (option->lentot + 1));
	while (i < tmp)
	{
		option->rprint[i] = ' ';
		i++;
	}
	option->rprint[i] = '\0';
	option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
}

void		ft_set_field(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(option->buffer);
	if (option->neg)
	{
		option->f = 1;
		option->buffer = ft_strfjoin("-", option->buffer, 2);
	}
	if (option->lentot > tmp)
	{
		ft_set_continue(option, tmp, i);
	}
	// else if (option->lentot < tmp && option->lentot != 0)
	// {
	// 	option->rprint = malloc(sizeof(char) * (option->lentot + 1));
	// 	while (i < option->lentot)
	// 	{
	// 		option->rprint[i] = option->buffer[i];
	// 		i++;
	// 	}
	// 	option->rprint[i] = '\0';
	// }
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
