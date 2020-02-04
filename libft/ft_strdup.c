/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:47:51 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/04 15:50:03 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char		*dst;
	size_t		i;

	i = 0;
	if (!s1)
		return (ft_strdup("\0"));
	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	return (ft_strcpy(dst, s1));
}
