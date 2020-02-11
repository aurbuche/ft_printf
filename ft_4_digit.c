/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_digit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/10 17:56:42 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_4_digit2(t_option *option, int i)
{
	if (i < 0)
	{
		i = -i;
		option->neg = 1;
	}
	option->buffer = ft_itoa(i);
	return (i);
}

void		ft_4_u(t_option *option, va_list ap)
{
	char	*base;
	size_t	i;

	base = "0123456789";
	i = va_arg(ap, unsigned int);
	option->buffer = ft_itoa_base(i, base);
	if (i == 0 && option->p == 1 && option->preci == 0)
	{
		option->rprint = ft_strdup("");
	}
	else if (option->flag != 0)
	{
		ft_set_flag(option);
	}
	else
		option->rprint = ft_strdup(option->buffer);
	ft_display(option);
}

void		ft_4_di(t_option *option, va_list ap)
{
	int		i;

	i = va_arg(ap, int);
	if (i == -2147483648)
	{
		option->buffer = ft_strdup("2147483648");
		option->neg = 1;
	}
	else
		i = ft_4_digit2(option, i);
	if (option->p && option->preci == 0 && option->w < 0)
	{
		// dprintf(1, "{%d}", 3);
		option->rprint = ft_strdup(option->buffer);
	}
	else if (i == 0 && option->p == 1 && option->preci == 0)
		option->rprint = ft_strdup("");
	else if (option->flag != 0)
		ft_set_flag(option);
	else
		option->rprint = ft_strdup(option->buffer);
	if (option->neg && option->f == 0)
		option->rprint = ft_strfjoin("-", option->rprint, 2);
	ft_display(option);
}
