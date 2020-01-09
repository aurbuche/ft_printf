/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_converter.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 09:50:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 13:15:02 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_is_converter(char c)
{
	char	*converter;

	converter = "cspdiuxX%";
	while (*converter)
	{
		if (*converter == c)
			return (1);
		converter++;
	}
	return (0);
}

int			ft_is_flag(char c, size_t i)
{
	if ((i = 0) && (c == '0' || c == '.' || c == '*' || c == '-'))
		return (1);
	else if ((i != 0) && (c == '.' || c == '*' || c == '-'))
		return (1);
	return (0);
}
