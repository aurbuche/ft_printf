/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/04 10:25:31 by aurbuche     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 10:19:03 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void red () 
{
  printf("\033[0;31m");
}

void yellow ()
{
  printf("\033[0;33m");
}

void blue () 
{
  printf("\033[0;34m");
}

void magenta ()
{
	printf("\033[0;95m");
}

void green()
{
	printf("\033[0;32m");
}

void reset ()
{
	printf("\033[0m");
}

int		main(int ac, char **av)
{
	int 	i;
	int		j;
	int		k;

	i = 0;
	j = 'a';
	k = 'A';
	ac = 1;
	printf("%s\n", av[ac]);
	/*
	red();
	puts("---Test pour un caractères---\n");
	while (j <= 'z')
	{
		ft_printf("\033[0mft_printf\t:\t|%c|   |%c|\n", j, k);
		printf("printf\t\t:\t|%c|   |%c|\n", j, k);
		j++;
		k++;
	}

	red();
	printf("%s", "\n---Test pour un décimal---\n");
	reset();
	while (i <= 9)
	{
		ft_printf("\033[0mft_printf\t:\t|%d|  |%d|  |%d|  |%d|\n", i, i + 10, i + 20, i + 30);
		printf("printf\t\t:\t|%d|  |%d|  |%d|  |%d|\n", i, i + 10, i + 20, i + 30);
		i++;
	}

	red();
	printf("%s", "\n---Test pour une string---\n");
	reset();
	ft_printf("\033[0mft_printfs \t:\t|%s|\n", av[ac]);
	printf("printf\t\t:\t|%s|\n", av[ac]);

	red();
	printf("%s", "\n---Test pour un unsigned int---\n");
	reset();
	i = 0;
	while (i <= 9)
	{
		ft_printf("\033[0mft_printf \t:\t|%u|  |%u|  |%u|\n", i, i + 10, i + 20);
		printf("printf\t\t:\t|%u|  |%u|  |%u|\n", i, i + 10, i + 20);
		i++;
	}

	red();
	printf("%s", "\n---Test pour une adresse---\n");
	reset();
	ft_printf("\033[0mft_printf \t:\t|%p|\n", &i);
	printf("printf\t\t:\t|%p|\n", &i);

	red();
	printf("%s", "\n---Test pour l'hexa---\n");
	reset();
	i = 0;
	while (i < 16)
	{
		ft_printf("\033[0mft_printf x \t:\t|%x|\n", i);
		printf("printf\t  x \t:\t|%x|\n", i);
		ft_printf("ft_printf X \t:\t|%X|\n", i);
		printf("printf\t  X \t:\t|%X|\n", i);
		i++;
	}*/
	printf("printf : %5d\n", 5);
	ft_printf("ft_printf : %9d\n", 5);
	
	return(0);
}