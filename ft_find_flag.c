/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 16:33:45 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_find_flag(char c, t_option *option)
{
	int		i;
	int		j;
	char	*flag;

	flag = "-0*.";
	i = 0;
	j = 0;
	while (flag[i])
	{
		if (flag[i] == c)
		{
			option->flags[j] == flag[i];
			i++;
			j++;
			break ;
		}
		i++;
	}
}
