/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 13:01:10 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 20:53:21 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int		main(void)
{
	// char	*str = ft_strnjoin("      ", "101", 3);
	// dprintf(1, "__|%s|__\n", str);
	int		i = 5;
	printf("__|%*p|__", 16, &i);
}



	// str = va_arg(ap, char *);
	// tmp = ft_strlen(str) + 1;
	// option->rprint = ft_strnjoin(option->width, str, (ft_strlen(option->width - tmp)));