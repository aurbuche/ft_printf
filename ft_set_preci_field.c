/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_set_preci_field.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/11 10:31:15 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/13 16:55:47 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_one(t_option *option, char *s1, size_t i)
{
	size_t		tmp;

	tmp = option->lentot;
	if (option->preci > ft_strlen(option->buffer))
		option->lentot -= option->preci;
	else if (ft_strlen(option->buffer) > option->lentot)
		option->lentot = ft_strlen(option->buffer);
	else
		option->lentot -= ft_strlen(option->buffer);
	s1 = malloc(sizeof(char) * (option->lentot + 1));
	if (tmp > ft_strlen(option->buffer))
	{
		while (i < option->lentot)
		{
			s1[i] = ' ';
			i++;
		}
	}
	s1[i] = '\0';
	i = (int)ft_atoi(option->buffer);
	if (option->i == 0 && option->converter != 's' && option->converter != 'x'
			&& option->converter != 'X')
		option->rprint = ft_strdup(" ");
	else
		ft_set_precision(option);
	option->rprint = ft_strfjoin(s1, option->rprint, 3);
}

void		ft_next(t_option *option, char *s1, size_t i)
{
	i = 0;
	if (option->lentot > option->preci
			|| ft_strlen(option->buffer) == option->lentot)
		ft_set_field(option);
	else if (option->lentot == option->preci)
		ft_set_precision(option);
	else
		option->rprint = ft_strdup("");
	s1 = NULL;
}

void		ft_set_preci_field(t_option *option)
{
	char		*s1;
	int			i;

	if (option->neg && option->preci == 0)
	{
		i = -(int)ft_atoi(option->buffer);
		option->buffer = ft_itoa(i);
	}
	i = 0;
	s1 = NULL;
	if (((option->converter == 'd' || option->converter == 'i'
					|| option->converter == 'x' || option->converter == 'X')
				&& option->lentot > option->preci))
	{
		ft_one(option, s1, i);
		option->neg = 0;
	}
	else if ((option->converter == 'd' || option->converter == 'i'
				|| option->converter == 'x' || option->converter == 'X')
			&& option->lentot < option->preci)
		ft_set_precision(option);
	else
		ft_next(option, s1, i);
}
