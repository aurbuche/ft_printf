/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_hyphen_preci.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/31 13:18:45 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 14:22:19 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_set_hyphen_preci(t_option *option)
{
	char		*buff;
	size_t		tmp;
	size_t		i;

	buff = NULL;
	ft_set_precision(option);
	buff = ft_strdup(option->rprint);
	if (option->hyphen > ft_strlen(option->rprint))
	{
		i = 0;
		tmp = option->hyphen - option->preci;
		option->rprint = malloc(sizeof(char) * (tmp + 1));
		while (i < tmp)
		{
			option->rprint[i] = ' ';
			i++;
		}
		option->rprint[i] = '\0';
		option->rprint = ft_strfjoin(buff, option->rprint, 2);
	}
	free(buff);
}
