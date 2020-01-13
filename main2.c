/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 13:01:10 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 16:01:48 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int		main(void)
{
	// char	*str = ft_strnjoin("      ", "101", 3);
	// dprintf(1, "__|%s|__\n", str);
	printf("__|%s|__", ft_itoa('4'));
}



	// str = va_arg(ap, char *);
	// tmp = ft_strlen(str) + 1;
	// option->rprint = ft_strnjoin(option->width, str, (ft_strlen(option->width - tmp)));