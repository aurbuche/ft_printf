/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_flag.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:40:47 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 16:20:06 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_find_flag(t_option option, va_list ap, char *fmt)
{
	size_t	i;

	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '-' || fmt[i] == '*' || fmt[i] == '.' || fmt[i] == '0')
			return (fmt[i]);
		i++;
	}
}
