/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnjoin.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:16:15 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 14:30:59 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + (ft_strlen(s2) > len ? len : ft_strlen(s2)) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i != len)
		str[i] = s1[i];
	str[i] = '\0';
	while (s2[j] != '\0')
	{
		str[i++] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
