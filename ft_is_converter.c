/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_converter.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 09:50:38 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 09:56:47 by aurbuche    ###    #+. /#+    ###.fr     */
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
