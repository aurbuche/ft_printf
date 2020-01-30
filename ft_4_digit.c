/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_4_digit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:47:27 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/30 18:00:38 by aurbuche    ###    #+. /#+    ###.fr     */
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
}

void		ft_4_digit(t_option *option, va_list ap)
{
	int		i;
	char	*c;

	c = NULL;
	if (option->converter == 'u')
		ft_4_u(option, ap);
	else
	{
		i = va_arg(ap, int);
		if (i < 0)
		{
			i = -i;
			c = "-";
		}
		option->buffer = ft_itoa(i);
		if (i == 0 && option->p == 1)
			ft_4_digit2(option);
		else if (option->flag != 0)
			ft_set_flag(option);
		else
			option->rprint = ft_strdup(option->buffer);
	}
	if (c)
		option->rprint = ft_strfjoin(c, option->rprint, 2);
	ft_display(option);
}
