/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solotest.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/08 10:54:18 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/05 16:18:38 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

#include <stdio.h>
#include <limits.h>

/*
int		main(void)
{
	char *str = "Bonjour";
	dprintf(1, "\ntesting\t: %s\n", "\"%3i\", -1");
	if ((printf("|%*.10x|\n", -45, 200)) == (ft_printf("|%*.10x|\n", -45, 200)))
		puts("SUCCEED\n");
	else
		puts("ERROR\n");

	dprintf(1, "\ntesting\t: %s\n", "\"|%01i|\", -1");
	if ((printf("|%01i|\n", -1)) == (ft_printf("|%01i\n|", -1)))
		puts("SUCCEED\n");
	else
		puts("ERROR\n");

	dprintf(1, "\ntesting\t: %s\n", "\"|%2.2i|\", -1");
	if ((printf("|%2.2i|\n", -1)) == (ft_printf("|%2.2i|\n", -1)))
		puts("SUCCEED\n");
	else
		puts("ERROR\n");

	printf("printf    :\tline :\t|%d|\n\t\tstr :\t|%s|\n", 9, str);
	ft_printf("ft_printf :\tline :\t|%d|\n\t\tstr :\t|%s|\n", 9, str);
}*/

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
	ac = 1;
	puts(av[ac]);
	int 	i;
	int		j;
	// int		k;
	// int		l;
	// int		m;

	// i = 0;
	// j = 'a';
	// k = 'A';
// 	blue();
// 	puts("---Test pour un caractères---\n");
// 	while (j <= 'z')
// 	{
// 		ft_printf("\033[0mft_printf\t:\t|%c|	|%c|\n", j, k);
// 		printf("printf\t\t:\t|%c|	|%c|\n", j, k);
// 		j++;
// 		k++;
// 	}

// /***************************************************************************************************/
	
// 	blue();
// 	printf("%s", "\n---Test pour un décimal---\n");
// 	reset();
// 	while (i <= 9)
// 	{
// 		ft_printf("\033[0mft_printf\t:\t|%d|  |%d|  |%d|  |%d|\n", i, i + 10, i + 20, i + 30);
// 		printf("printf\t\t:\t|%d|  |%d|  |%d|  |%d|\n", i, i + 10, i + 20, i + 30);
// 		i++;
// 	}

// /***************************************************************************************************/
	
// 	blue();
// 	printf("%s", "\n---Test pour une string---\n");
// 	reset();
// 	printf("\033[0;35m\nTest pour (%%s, string)\033[0m\n\n");
// 	i = printf("REAL PRINTF\t:\t|%s|\n", av[ac]);
// 	j = ft_printf("MINE PRINTF\t:\t|%s|\n", av[ac]);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// /***************************************************************************************************/
	
// 	blue();
// 	printf("%s", "\n---Test pour un unsigned int---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour (|%%u|, 652)\033[0m\n\n");
// 	i = printf("REAL |%u|\n", 652);
// 	j = ft_printf("MINE |%u|\n", 652);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%u|, 0)\033[0m\n\n");
// 	i = printf("REAL |%u|\n", 0);
// 	j = ft_printf("MINE |%u|\n", 0);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%u|, -6)\033[0m\n\n");
// 	i = printf("REAL |%u|\n", -6);
// 	j = ft_printf("MINE |%u|\n", -6);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// /***************************************************************************************************/

// 	blue();
// 	printf("%s", "\n---Test pour une adresse---\n");
// 	reset();
// 	printf("\033[0m\n");
// 	printf("\033[0;35m\nTest pour (%%p, &i)\033[0m\n\n");
// 	l = printf("REAL printf\t:\t|%p|\n", &i);
// 	m = ft_printf("MINE printf\t:\t|%p|\n", &i);
// 	if (l == m)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", l);
// 		printf("return ft_printf :\t[%d]", m);
// 		printf("\n");
// 	}

// /***************************************************************************************************/
	
// 	blue();
// 	printf("%s", "\n---Test pour l'hexa---\n");
// 	reset();
// 	i = 0;
// 	while (i < 16)
// 	{
// 		ft_printf("\033[0mft_printf x \t:\t|%x|\n", i);
// 		printf("printf\t  x \t:\t|%x|\n", i);
// 		ft_printf("ft_printf X \t:\t|%X|\n", i);
// 		printf("printf\t  X \t:\t|%X|\n", i);
// 		i++;
// 	}

// /***************************************************************************************************/

// 	blue();
// 	printf("%s", "\n---Test de la width---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour (|%%*d|, 6, 101)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*d|\n", 6, 101) == printf("REAL printf\t:\t|%*d|\n", 6, 101))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*d|, 6, 1010101)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*d|\n", 6, 1010101) == printf("REAL printf\t:\t|%*d|\n", 6, 1010101))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}
	
// 	i = 65;
// 	printf("\033[0;35m\nTest pour (|%%*x|, 6, i)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*x|\n", 6, i) == printf("REAL printf\t:\t|%*x|\n", 6, i))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}
	
// 	printf("\033[0;35m\nTest pour (|%%*s|, 6, 101)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*s|\n", 6, "101") == printf("REAL printf\t:\t|%*s|\n", 6, "101"))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}
	
// 	printf("\033[0;35m\nTest pour (|%%*c|, 6, 1)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*c|\n", 6, '1') == printf("REAL printf\t:\t|%*c|\n", 6, '1'))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}
	
// 	printf("\033[0;35m\nTest pour (|%%*u|, 6, 101)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*u|\n", 6, 101) == printf("REAL printf\t:\t|%*u|\n", 6, 101))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}

// 	i = -64568;
// 	printf("\033[0;35m\nTest pour (|%%*p|, 35, &i)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*p|\n", 35, &i) == printf("REAL printf\t:\t|%*p|\n", 35, &i))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*x|, 12, 612549)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*x|\n", 12, 612549) == printf("REAL printf\t:\t|%*x|\n", 12, 612549))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*X|, 12, 612549)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*X|\n", 12, 612549) == printf("REAL printf\t:\t|%*X|\n", 12, 612549))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}
	
// 	printf("\033[0;35m\nTest pour (|%%*d|, -6, 101)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*d|\n", -6, 101) == printf("REAL printf\t:\t|%*d|\n", -6, 101))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*d|, -6, 1010101)\033[0m\n\n");
// 	if (ft_printf("MINE printf\t:\t|%*d|\n", -6, 1010101) == printf("REAL printf\t:\t|%*d|\n", -6, 1010101))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 	}

// 	printf("\033[0m");
// /***************************************************************************************************/

// 	blue();
// 	printf("%s", "\n---Test de la largeur---\n");
// 	reset();

// 	printf("\033[0;35m\n\nTest pour (|%%-12s|, 6595)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%-12s|\n", "6565");
// 	j = ft_printf("MINE printf\t:\t|%-12s|\n", "6565");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\n\nTest pour (|%%-2s|, 6595)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%-2s|\n", "6565");
// 	j = ft_printf("MINE printf\t:\t|%-2s|\n", "6565");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\n\nTest pour (|%%-s|, 6595)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%-s|\n", "6565");
// 	j = ft_printf("MINE printf\t:\t|%-s|\n", "6565");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0m");
// /***************************************************************************************************/

// 	blue();
// 	printf("%s", "\n\n---Test de la precision---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour (|%%.13d|, 9585)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%.13d|\n", 9585);
// 	j = ft_printf("MINE printf\t:\t|%.13d|\n", 9585);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}
	
// 	printf("\033[0;35m\nTest pour (|%%.2d|, 9585)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%.2d|\n", 9585);
// 	j = ft_printf("MINE printf\t:\t|%.2d|\n", 9585);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%.d|, 0)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%.d|\n", 0);
// 	j = ft_printf("MINE printf\t:\t|%.d|\n", 0);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%.d|, 5)\033[0m\n\n");
// 	i = printf("REAL printf\t:\t|%.d|\n", 5);
// 	j = ft_printf("MINE printf\t:\t|%.d|\n", 5);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0m");
// /*******************************************************************************************/

// 	blue();
// 	printf("%s", "\n\n---Test pourcent---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour (|%%pouet|, %s\033[0m\n\n", "lel)");
// 	i = printf("|(%%pouet)|%s\n", "lel");
// 	j = ft_printf("|(%%pouet)|%s\n", "lel");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%pouet|)\033[0m\n\n");
// 	i = printf("|(%%pouet)|\n");
// 	j = ft_printf("|(%%pouet)|\n");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour |%s %s|\033[0m\n\n", "%%s", "%%s");
// 	i = printf("|%%s %%s|\n");
// 	j = ft_printf("|%%s %%s|\n");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

	// printf("\033[0;35m\nTest pour (65 | %%s | le | %%d |, bonjour, 4)\033[0m\n\n");
	// i = printf("65 | %s | les | %d |\n", "bonjour", 4);
	// j = ft_printf("65 | %s | les | %d |\n", "bonjour", 4);
	// if ( i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

// 	printf("\033[0;35m\nTest pour (%%2.1i, -9)\033[0m\n\n");
// 	i = printf("|%2.1i|\n", -9);
// 	j = ft_printf("|%2.1i|\n", -9);
// 	if ( i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0m");
/**********************************************************************************************/

	// blue();
	// printf("%s", "\n---Test flag zero---\n");
	// reset();

	// printf("\033[0;35m\nTest pour (|%%06d|, 56)\033[0m\n\n");
	// i = printf("REAL |%06d|\n", 56);
	// j = ft_printf("MINE |%06d|\n", 56);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour |%%03d|\033[0m\n\n");
	// i = printf("REAL |%03d|\n", 5669);
	// j = ft_printf("MINE |%03d|\n", 5669);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour |%%06d|\033[0m\n\n");
	// i = printf("REAL |%06d|\n", 5669);
	// j = ft_printf("MINE |%06d|\n", 5669);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%0.6d|, 5669)\033[0m\n\n");
	// i = printf("REAL |%0.6d|\n", 5669);
	// j = ft_printf("MINE |%0.6d|\n", 5669);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%0.2d|, 5669)\033[0m\n\n");
	// i = printf("REAL |%0.2d|\n", 5669);
	// j = ft_printf("MINE |%0.2d|\n", 5669);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%0*d|, 9, 5669)\033[0m\n\n");
	// i = printf("REAL |%0*d|\n", 9, 5669);
	// j = ft_printf("MINE |%0*d|\n", 9, 5669);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%0*d|, 2, 5669)\033[0m\n\n");
	// i = printf("REAL |%0*d|\n", 2, 5669);
	// j = ft_printf("MINE |%0*d|\n", 2, 5669);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%01i|, -1)\033[0m\n\n");
	// i = printf("%01i\n", -1);
	// j = ft_printf("%01i\n", -1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%02i|, -1)\033[0m\n\n");
	// i = printf("%02i\n", -1);
	// j = ft_printf("%02i\n", -1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%03i|, -1)\033[0m\n\n");
	// i = printf("%03i\n", -1);
	// j = ft_printf("%03i\n", -1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0m\n");
// /**********************************************************************************************/

// 	blue();
// 	printf("%s", "\n---Test champ de taille minimal---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour (|%%12d|, 56)\033[0m\n\n");
// 	i = printf("REAL |%12d|\n", 56);
// 	j = ft_printf("MINE |%12d|\n", 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%2.6d|, 56)\033[0m\n\n");
// 	i = printf("REAL |%2.6d|\n", 56);
// 	j = ft_printf("MINE |%2.6d|\n", 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%2.2d|, 3256)\033[0m\n\n");
// 	i = printf("REAL |%2.2d|\n", 3256);
// 	j = ft_printf("MINE |%2.2d|\n", 3256);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%9.2d|, 3256)\033[0m\n\n");
// 	i = printf("REAL |%9.2d|\n", 3256);
// 	j = ft_printf("MINE |%9.2d|\n", 3256);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour |%%3d|\033[0m\n\n");
// 	i = printf("REAL |%3d|\n", 5669);
// 	j = ft_printf("MINE |%3d|\n", 5669);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%150p|, bonjour)\033[0m\n\n");
// 	i = printf("|%150p|\n", "bonjour");
// 	j = ft_printf("|%150p|\n", "bonjour");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// /**********************************************************************************************/

// 	blue();
// 	printf("%s", "\n---Test divers ---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour (|%%-.6d|, 56)\033[0m\n\n");
// 	i = printf("REAL |%-.6d|\n", 56);
// 	j = ft_printf("MINE |%-.6d|\n", 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%-6.7d|, 56)\033[0m\n\n");
// 	i = printf("|%-6.7d|\n", 56);
// 	j = ft_printf("|%-6.7d|\n", 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%-6.3d|, 5659456)\033[0m\n\n");
// 	i = printf("|%-6.3d|\n", 5659456);
// 	j = ft_printf("|%-6.3d|\n", 5659456);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*.6d|, 6, 56)\033[0m\n\n");
// 	i = printf("|%*.6d|\n", 6, 56);
// 	j = ft_printf("|%*.6d|\n", 6, 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*.6d|, 2, 56)\033[0m\n\n");
// 	i = printf("REAL |%*.6d|\n", 2, 56);
// 	j = ft_printf("MINE |%*.6d|\n", 2, 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%-*.6d|, 6, 56)\033[0m\n\n");
// 	i = printf("REAL |%-*.6d|\n", 6,  56);
// 	j = ft_printf("MINE |%-*.6d|\n", 6, 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%*d|, -45, 0)\033[0m\n\n");
// 	i = printf("REAL |%*d|\n", -45, 0);
// 	j = ft_printf("MINE |%*d|\n", -45, 0);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%.d|, 0)\033[0m\n\n");
// 	i = printf("REAL |%.d|\n", 0);
// 	j = ft_printf("MINE |%.d|\n", 0);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%1.10i|, -4159223)\033[0m\n\n");
// 	i = printf("REAL [%1.10i]\n", -4159223);
// 	j = ft_printf("MINE [%1.10i]\n", -4159223);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%0.4i|, 0)\033[0m\n\n");
// 	i = printf("REAL [%0.4i]\n", 0);
// 	j = ft_printf("MINE [%0.4i]\n", 0);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%-5.6s|, lol)\033[0m\n\n");
// 	i = printf("REAL [%-5.6s]\n", "lol");
// 	j = ft_printf("MINE [%-5.6s]\n", "lol");
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// printf("\033[0;35m\nTest pour (|%%d, %%s, %%i|, 5, arg, 6)\033[0m\n\n");
// i = printf("REAL [%d, %s, %i]\n", 5, av[ac], 6);
// j = ft_printf("MINE [%d, %s, %i]\n", 5, av[ac], 6);
// if (i == j)
// 	puts("\n\033[0;32m TEST OK");
// else
// {
// 	puts("\n\033[0;31mTEST FAILED");
// 	printf("return printf :\t\t[%d]\n", i);
// 	printf("return ft_printf :\t[%d]", j);
// 	printf("\n");
// }

// 	printf("\033[0;35m\nTest pour (|%%-9.5d|, 56)\033[0m\n\n");
// 	i = printf("|%-9.5d|\n", 56);
// 	j = ft_printf("|%-9.5d|\n", 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}
	
// 	printf("\033[0;35m\nTest pour (|%%-6.3d|, 566)\033[0m\n\n");
// 	i = printf("REAL |%-6.3d|\n", 566);
// 	j = ft_printf("MINE |%-6.3d|\n", 566);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour (|%%c|, 'c')\033[0m\n\n");
// 	i = printf("REAL |%c|\n", 0);
// 	j = ft_printf("MINE |%c|\n", 0);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

/*****************************************************************************************/

	// printf("\033[0;35m\nTest pour (%%.2%%)\033[0m\n\n");
	// i = printf("|%.2%|\n");
	// j = ft_printf("|%.2%|\n");
	// if ( i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (%%.2%%)\033[0m\n\n");
	// i = printf("|%.2%|\n");
	// j = ft_printf("|%.2%|\n");
	// if ( i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (%%.s, 42)\033[0m\n\n");
	// i = printf("rl|%.s|\n", 42);
	// j = ft_printf("ft|%.s|\n", 42);
	// if ( i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (%%c, 0)\033[0m\n\n");
	// i = printf("|%c|\n", 0);
	// j = ft_printf("|%c|\n", 0);
	// if ( i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%.01i|, -1)\033[0m\n\n");
	// i = printf("|%.0d|\n", -1);
	// j = ft_printf("|%.0d|\n", -1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }


	// printf("\033[0;35m\nTest pour (|%%.20d| INT_MAX + 1)\033[0m\n\n");
	// i = printf("|%.20d|\n", INT_MAX + 1);
	// j = ft_printf("|%.20d|\n", INT_MAX + 1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%1.1s| )\033[0m\n\n");
	// i = printf("|%1.1s|\n", "");
	// j = ft_printf("|%1.1s|\n", "");
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%1.2s| )\033[0m\n\n");
	// i = printf("|%1.2s|\n", "");
	// j = ft_printf("|%1.2s|\n", "");
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	printf("\033[0;35m\nTest pour (|%%.*d|, -10, 42 )\033[0m\n\n");
	i = printf("|%.*d|\n", 10, 0);
	j = ft_printf("|%.*d|\n", 10, 0);
	if (i == j)
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
		printf("return printf :\t\t[%d]\n", i);
		printf("return ft_printf :\t[%d]", j);
		printf("\n");
	}

	printf("\033[0;35m\nTest pour (|%%*.*s|, 5, 0, Hello)\033[0m\n\n");
	i = printf("|%*.*s|\n", -5, 0, "Hello");
	j = ft_printf("|%*.*s|\n", -5, 0, "Hello");
	if (i == j)
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
		printf("return printf :\t\t[%d]\n", i);
		printf("return ft_printf :\t[%d]", j);
		printf("\n");
	}

	// printf("\033[0;35m\nTest pour (|%%1.0s|, 0)\033[0m\n\n");
	// i = printf("REAL |%1.0s|\n", "");
	// j = ft_printf("MINE |%1.0s|\n", "");
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%3.1d|, -1)\033[0m\n\n");
	// i = printf("REAL |%3.1d|\n", -1);
	// j = ft_printf("MINE |%3.1d|\n", -1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour (|%%3.0d|, -1)\033[0m\n\n");
	// i = printf("REAL |%3.0d|\n", -1);
	// j = ft_printf("MINE |%3.0d|\n", -1);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

// 	printf("\033[0m\n");
	// printf("\033[0m\n__|%s|__\n", "12345678910");
	// printf("return printf : [%d]\n", printf("__|%.10d|__\n", 9585));
	// printf("\033[0m\n__|%s|__\n", "12345678910");
	// printf("return ft_printf : [%d]", ft_printf("__|%.10d|__\n", 9585));

	// puts("\n");
	// printf("\033[0m\n__|%s|__\n", "12345678910");
	// printf("return printf : [%d]\n", printf("__|%.2d|__\n", 9585));
	// printf("\033[0m\n__|%s|__\n", "12345678910");
	// printf("return ft_printf : [%d]", ft_printf("__|%.2d|__\n", 9585));
	
	// printf("return printf : [%d]\n", printf("%p\n", &i));
	// printf("return ft_printf : [%d]", ft_printf("%p\n", &i));
	

	// printf("\033[0m\n__|%s|__\n", "12345678910");
	// printf("__|%-12d|__\n", 9);
	// printf("\033[0m\n__|%s|__\n", "12345678910");
	// ft_printf("__|%-12d|__\n", 9);
	// ft_printf("\033[0mft_printf\t:\t|%*s|\n", 6, "101");
	// printf("printf\t\t:\t|%*s|\n", 6, "101");
	
	// ft_printf("ft_printf\t:\t|%s|\n", "101");
	// printf("printf\t\t:\t|%s|\n", "101");

	// ft_printf("ft_printf\t:\t|%*c|\n", 6, '1');
	// printf("printf\t\t:\t|%*c|\n", 6, '1');

	// ft_printf("ft_printf\t:\t|%*d|\n", 6, 1010101);
	// printf("printf\t\t:\t|%*d|\n", 6, 1010101);
	// ft_printf("ft_printf\t:\t|%d|\n", 200);
	// printf("printf\t\t:\t|%d|\n", 200);

	// printf("\n");
	// if (printf("|%.20X|\n", 16) ==	ft_printf("|%.20X|\n", 16))
	// 	puts ("\nOK");
	// else
	// 	puts("\nFAILED");

	// printf("\033[0;35m\n\nTest pour (|%%s|, 46)\033[0m\n\n");
	// i = ft_printf("%s\n", "46");
	// j = printf("%s\n", "46");
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf : [%d]\n", printf("%s\n", "46"));
	// 	printf("return ft_printf : [%d]", ft_printf("%s\n", "46"));
	// }
	
	return(0);
}