/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_digit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/03 15:51:13 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_4_digit2(t_option *option)
{
	option->rprint = ft_strdup("");
}

void		ft_4_u(t_option *option, va_list ap)
{
	char	*base;
	size_t	i;

	base = "0123456789";
	i = va_arg(ap, unsigned int);
	option->buffer = ft_itoa_base(i, base);
	if (i == 0 && option->p == 1)
		ft_4_digit2(option);
	else if (option->flag != 0)
		ft_set_flag(option);
	else
		option->rprint = ft_strdup(option->buffer);
	ft_display(option);
}

void		ft_4_di(t_option *option, va_list ap)
{
	int		i;

	i = va_arg(ap, int);
	if (i < 0 && option->p != 0)
	{
		if (i == -2147483648)
			i = -2147483548;
		i = -i;
		option->neg = 1;
		// dprintf(1, "{%d}", 6);
	}
	option->buffer = ft_itoa(i);
	if (i == 0 && option->p == 1 && option->preci == 0
		&& option->lentot == 0 && option->z == 0)
	{
		// dprintf(1, "{%d}", 6);
		ft_4_digit2(option);
	}
	else if (option->flag != 0)
	{
		// dprintf(1, "{%d}", 9);
		ft_set_flag(option);
	}
	else
		option->rprint = ft_strdup(option->buffer);
	if (option->neg && option->p != 0 && option->preci)
	{
		// dprintf(1, "{%d}", 6);
		option->rprint = ft_strfjoin("-", option->rprint, 2);
	}
	ft_display(option);
}
