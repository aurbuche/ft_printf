/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_zero.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:15:59 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/10 16:30:55 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_zero(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	tmp = ft_strlen(option->buffer);
	if (option->neg)
		tmp++;
	if (option->zero > tmp)
	{
		tmp = option->zero - tmp;
		option->rprint = malloc(sizeof(char) * (option->zero + 1));
		while (i < tmp)
		{
			option->rprint[i] = '0';
			i++;
		}
		option->rprint[i] = '\0';
		option->rprint = ft_strfjoin(option->rprint, option->buffer, 1);
	}
	else
		option->rprint = ft_strdup(option->buffer);
}

void		ft_zero(t_option *option, char *str, size_t i)
{
	char	*buff;
	int		j;

	j = 0;
	buff = malloc(sizeof(char) * (ft_len_nb(str, i) + 1));
	option->nflag = ft_len_nb(str, i) + 1;
	while (48 <= str[i] && str[i] <= 57)
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	buff[j] = '\0';
	option->flag = '0';
	option->zero = ft_atoi(buff);
	option->z = 1;
	free((char*)buff);
}
