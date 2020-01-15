/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_precision.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:10:07 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:22:48 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_set_precision(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(option->buffer);
	if (option->preci > tmp)
	{
		tmp = option->preci - tmp;
		option->rprint = malloc(sizeof(char) * option->preci);
		while (i < tmp)
		{
			option->rprint[i] = '0';
			i++;
		}
		option->rprint = ft_strnjoin(option->rprint, option->buffer, tmp);
	}
	else
		option->rprint = option->buffer;
}

void			ft_precision(t_option *option, char *str, size_t i)
{
	char		*buff;
	int			j;

	j = 0;
	buff = malloc(sizeof(char) * ft_len_nb(str, i) + 1);
	option->nflag = ft_len_nb(str, i) + 1;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	option->flag = '.';
	option->preci = ft_atoi(buff);
}
