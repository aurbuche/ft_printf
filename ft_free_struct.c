/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_free_struct.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 14:15:20 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 15:05:46 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_free_struct(t_option *option)
{
	free(option->width);
	// free(option->buffer);
	// free(option->rprint);
	free(option);
}
