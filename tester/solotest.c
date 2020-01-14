/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solotest.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurelienbucher <aurelienbucher@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/08 10:54:18 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 20:49:26 by aurelienbuc ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	if ((printf("|%*c|\n", 6, 'c')) == (ft_printf("|%*c|\n", 6, 'c')))
		puts("\033[0;32mSUCCEED");
	else
		puts("\033[0;33ERROR");

	printf("\033[0m\n");
	if ((printf("|%*d|\n", 6, 256)) == (ft_printf("|%*d|\n", 6, 256)))
		puts("\033[0;32mSUCCEED");
	else
		puts("\033[0;33ERROR");

	printf("\033[0m\n");
	if ((printf("|%*s|\n", 12, "Bonjour")) == (ft_printf("|%*s|\n", 12, "Bonjour")))
		puts("\033[0;32mSUCCEED");
	else
		puts("\033[0;33mERROR");


}