/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_zero.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:15:59 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 16:23:30 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_zero(t_option *option)
{
	size_t		tmp;
	size_t		i;

	i = 0;
	option->rprint = ft_strdup(option->buffer);
	tmp = ft_strlen(option->buffer);
	if (option->zero > tmp)
	{
		tmp = option->zero - tmp;
		option->rprint = malloc(sizeof(char) * option->zero);
		while (i < tmp)
		{
			option->rprint[i] = '0';
			i++;
		}
		option->rprint[i] = '\0';
		option->rprint = ft_strnjoin(option->rprint, option->buffer, tmp);
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
	option->zero = ft_atoi(buff);
	option->z = 1;
	free((char*)buff);
}