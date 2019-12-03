/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_put_to_buf.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 16:35:03 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 16:49:04 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_to_buff(char c, t_option *option)
{
	option->buffer[option->b] = c;
	option->b++;
	if (option->b == BUFF_SIZE_P)
	{
		write(1, &option->buffer, option->b);
		option->b = 0;
		ft_bzero(option->buffer, BUFF_SIZE_P);
	}
}

void	ft_to_buff(t_option *option)
{
	int i;

	i = 0;
	while (i < option->final_len)
	{
		option->buffer[option->b] = option->final[i];
		option->b = option->b + 1;
		if (option->b == BUFF_SIZE_P)
		{
			write(1, &option->buffer, option->b);
			option->b = 0;
			ft_bzero(option->buffer, BUFF_SIZE_P);
		}
		i++;
	}
}