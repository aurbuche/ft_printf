/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ctos.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 12:50:30 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/04 15:58:31 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ctos(char c, t_option *option)
{
	char	*str;

	if (!c)
	{
		option->no = 1;
		option->rvalue++;
		return (ft_strdup("\0"));
	}
	if (!(str = ft_strdup("  ")))
		return (0);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
