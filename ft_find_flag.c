/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 16:55:53 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_is_flag(char c, size_t i)
{
	if ((i = 0) && (c == '0' || c == '.' || c == '*' || c == '-'))
		return (1);
	else if ((i != 0) && (c == '.' || c == '*' || c == '-'))
		return (1);
	return (0);
}

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
	dprintf(1, "--%s--", tmp);
	return (ft_strdup(tmp));
}
