/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 16:03:40 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_find_flag(char *fmt, t_option *option)
{
	int		i;
	int		j;
	char	*flag;

	flag = "-0*.";
	i = 0;
	j = 0;
	while (!ft_is_converter(fmt[j]))
	{
		if (fmt[j] == flag[i])
		{
			*option->flags = flag[i];
			option->flags++;
			j++;
		}
		i++;
	}
}
