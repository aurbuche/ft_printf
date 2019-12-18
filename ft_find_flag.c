/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:15:21 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_is_flag(char c)
{
	char	*flag;
	int		i;

	flag = "-.0*";
	i = 0;
	while (flag[i])
	{
		if (c == flag[i])
			return (1);
		i++;
	}
	return (0);
}

void		ft_stock_flag(char fmt, t_option *option)
{
	*option->flags = fmt;
}

char		*get_flag(char *fmt, t_option *option, size_t i)
{
	if (fmt[i] == '0' || fmt[i] == '.' || fmt[i] == '*'
		|| fmt[i] == '-')
		*option->flags = fmt[i];
	printf("__%c__", fmt[i]);
	while (fmt[i++] == '.' || fmt[i++] == '*' || fmt[i++] == '-')
	{
		*option->flags++ = fmt[i++];
	}
	printf("(%c)", *option->flags);
	printf("+%d+\n", 6);
	if (ft_isdigit(fmt[i]))
	{
		printf("++%d++", 9);
		get_width(option, fmt, i);
	}
	return (ft_strndup(fmt, i));
}
