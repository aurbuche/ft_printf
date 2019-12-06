/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:13:16 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 13:04:09 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char		ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char*)str;
	i = 0;
	if (c == '\0' && *s == '\0')
		return ((char)s);
	while (s[i])
	{
		if ((char)s[i] == c)
			return ((char)s);
		i++;
	}
	return (0);
}
