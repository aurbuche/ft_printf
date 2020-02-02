/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 09:50:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/02 20:28:05 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_is_converter(char c)
{
	char	*converter;

	converter = "cspdiuxX";
	while (*converter)
	{
		if (*converter == c)
			return (1);
		converter++;
	}
	return (0);
}

int			ft_is_flag(char c)
{
	if (c == '.' || c == '*' || c == '-' || c == '0')
	{
		return (1);
	}
	return (0);
}
