/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 13:24:02 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:17:50 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

static intmax_t		ft_digitlen_base(intmax_t n, int baselen)
{
	intmax_t	ret;

	ret = 0;
	if (n < 0 && baselen == 10)
	{
		ret++;
		n = -n;
	}
	else if (n < 0)
		n = -n;
	while (n != 0)
	{
		n = n / baselen;
		ret++;
	}
	return (ret);
}

char				*ft_itoa_base(intmax_t n, int baselen, char *base)
{
	intmax_t		len;
	intmax_t		i;
	char			*str;

	i = 0;
	len = ft_digitlen_base(n, baselen);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
		return (ft_strcpy(str, "0"));
	str[len] = '\0';
	if (n < 0 && baselen == 10)
	{
		n = -n;
		str[i++] = '-';
	}
	else if (n < 0)
		n = -n;
	while (len > i)
	{
		str[--len] = base[n % baselen];
		n = n / baselen;
	}
	return (str);
}
