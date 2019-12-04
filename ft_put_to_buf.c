/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_put_to_buf.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 16:35:03 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 11:03:19 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

ft_char_to_buff(char c, t_option *option)
{
	option->buffer[option->b] = c;
	option->b++;
	if (option->b == BUFFER_SIZE)
	{
		write(1, &option->buffer, option->b);
		option->b = 0;
		ft_bzero(option->buffer, BUFFER_SIZE);
	}
}

ft_to_buff(t_option *option)
{
	int i;

	i = 0;
	while (i < option->final_len)
	{
		option->buffer[option->b] = option->final[i];
		option->b = option->b + 1;
		if (option->b == BUFFER_SIZE)
		{
			write(1, &option->buffer, option->b);
			option->b = 0;
			ft_bzero(option->buffer, BUFFER_SIZE);
		}
		i++;
	}
}
