/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   width.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 13:35:44 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:15:19 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int		get_width(t_option *option, char *fmt, int i)
{
	while (ft_isdigit(fmt[i]))
	{
		option->width = fmt[i];
	}
	printf("/%d/", option->width);
	return (1);
}