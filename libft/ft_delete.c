/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_delete.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:15:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 09:33:15 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_delete(char **ptr)
{
	if (!ptr)
		return ;
	free(*ptr);
	*ptr = NULL;
}