/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:00:21 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_stock_flag(char *str, size_t n)
{
	char	*flag;
	char	*tmp;
	int		i;

	i = 0;
	flag = "-*.0";
	tmp = NULL;
	if (n > 0)
		flag = "-*.";
	while (flag[i])
	{
		if (flag[i] == *str)
		{
			*tmp = *str;
			tmp++;
			str++;
		}
	}
	return (ft_strdup(tmp));
}
