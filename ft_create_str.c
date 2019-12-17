/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_str.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 12:50:30 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 08:10:42 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_create_str(char c)
{
	char	*str;

	if (!(str = ft_strdup("")))
		return (0);
	str[0] = c;
	str[1] = 0;
	return (str);
}
