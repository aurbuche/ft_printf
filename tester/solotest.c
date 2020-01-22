/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solotest.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/08 10:54:18 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 13:16:04 by aurbuche    ###    #+. /#+    ###.fr     */
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

int		main(void)
{
	int 	i;
	// int		j;
	// int		k;

// 	i = 0;
// 	j = 'a';
// 	k = 'A';
// 	ac = 1;
// 	printf("%s\n", av[ac]);
// 	red();
// 	puts("---Test pour un caractères---\n");
// 	while (j <= 'z')
// 	{
// 		ft_printf("\033[0mft_printf\t:\t|%c|	|%c|\n", j, k);
// 		printf("printf\t\t:\t|%c|	|%c|\n", j, k);
// 		j++;
// 		k++;
// 	}

// 	red();
// 	printf("%s", "\n---Test pour un décimal---\n");
// 	reset();
// 	while (i <= 9)
// 	{
// 		ft_printf("\033[0mft_printf\t:\t|%d|  |%d|  |%d|  |%d|\n", i, i + 10, i + 20, i + 30);
// 		printf("printf\t\t:\t|%d|  |%d|  |%d|  |%d|\n", i, i + 10, i + 20, i + 30);
// 		i++;
// 	}

// 	red();
// 	printf("%s", "\n---Test pour une string---\n");
// 	reset();
// 	ft_printf("\033[0mft_printf \t:\t|%s|\n", av[ac]);
// 	printf("printf\t\t:\t|%s|\n", av[ac]);

// 	red();
// 	printf("%s", "\n---Test pour un unsigned int---\n");
// 	reset();
// 	i = 0;
// 	while (i <= 9)
// 	{
// 		ft_printf("\033[0mft_printf \t:\t|%u|  |%u|  |%u|\n", i, i + 10, i + 20);
// 		printf("printf\t\t:\t|%u|  |%u|  |%u|\n", i, i + 10, i + 20);
// 		i++;
// 	}

// 	red();
// 	printf("%s", "\n---Test pour une adresse---\n");
// 	reset();
// 	printf("\033[0m\n");
// 	if (ft_printf("printf\t:\t|%p|\n", &i) == printf("printf\t:\t|%p|\n", &i))
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 		puts("\n\033[0;31mTEST FAILED");

// 	red();
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
// 	printf("printf : [%9d]\n", 5);
// 	ft_printf("ft_printf : [%9d]\n", 5);

// 	// red();
// 	// printf("%s", "\n---Test pour le pourcent---\n");
// 	// reset();

// 	// ft_printf("\033[0mft_printf \t:\t|%%s|\n");
// 	// printf("printf\t\t:\t|%%s|\n");

// 	// printf("65 | %s | le | %d | --\n", "bonjour", 4);
// 	// ft_printf("65 | %s | le | %d | --\n", "bonjour", 4);

// /***************************************************************************************************/

	red();
	printf("%s", "\n---Test de la width---\n");
	reset();

	// int i;
	// int	j;
	
	i = 65;
	printf("\033[0;35m\nTest pour (|%%*x|, 6, i)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*x|\n", 6, i) == printf("REAL printf\t:\t|%*x|\n", 6, i))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}
	
	printf("\033[0;35m\nTest pour (|%%*s|, 6, 101)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*s|\n", 6, "101") == printf("REAL printf\t:\t|%*s|\n", 6, "101"))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}
	
	printf("\033[0;35m\nTest pour (|%%*c|, 6, 1)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*c|\n", 6, '1') == printf("REAL printf\t:\t|%*c|\n", 6, '1'))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}

	printf("\033[0;35m\nTest pour (|%%*d|, 6, 101)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*d|\n", 6, 101) == printf("REAL printf\t:\t|%*d|\n", 6, 101))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}

	printf("\033[0;35m\nTest pour (|%%*d|, 6, 1010101)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*d|\n", 6, 1010101) == printf("REAL printf\t:\t|%*d|\n", 6, 1010101))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}
	
	printf("\033[0;35m\nTest pour (|%%*u|, 6, 101)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*u|\n", 6, 101) == printf("REAL printf\t:\t|%*u|\n", 6, 101))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}

	i = -64568;
	printf("\033[0;35m\nTest pour (|%%*p|, 35, &i)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*p|\n", 35, &i) == printf("REAL printf\t:\t|%*p|\n", 35, &i))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}

	printf("\033[0;35m\nTest pour (|%%*x|, 12, 612549)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*x|\n", 12, 612549) == printf("REAL printf\t:\t|%*x|\n", 12, 612549))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}

	printf("\033[0;35m\nTest pour (|%%*X|, 12, 612549)\033[0m\n\n");
	if (ft_printf("MINE printf\t:\t|%*X|\n", 12, 612549) == printf("REAL printf\t:\t|%*X|\n", 12, 612549))
		puts("\n\033[0;32m TEST OK");
	else
	{
		puts("\n\033[0;31mTEST FAILED");
	}

/***************************************************************************************************/

// 	red();
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

// /***************************************************************************************************/

// 	red();
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

// /*******************************************************************************************/

// 	red();
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

// /**********************************************************************************************/

// 	red();
// 	printf("%s", "\n---Test flag zero---\n");
// 	reset();

// 	printf("\033[0;35m\nTest pour |%%06d|\033[0m\n\n");
// 	i = printf("REAL |%06d|\n", 56);
// 	j = ft_printf("MINE |%06d|\n", 56);
// 	if (i == j)
// 		puts("\n\033[0;32m TEST OK");
// 	else
// 	{
// 		puts("\n\033[0;31mTEST FAILED");
// 		printf("return printf :\t\t[%d]\n", i);
// 		printf("return ft_printf :\t[%d]", j);
// 		printf("\n");
// 	}

// 	printf("\033[0;35m\nTest pour |%%03d|\033[0m\n\n");
// 	i = printf("REAL |%03d|\n", 5669);
// 	j = ft_printf("MINE |%03d|\n", 5669);
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

	// red();
	// printf("%s", "\n---Test flag [%-.] ---\n");
	// reset();

	// printf("\033[0;35m\nTest pour |%%-.6d|\033[0m\n\n");
	// i = printf("|%.6d|\n", 56);
	// j = ft_printf("|%-.6d|\n", 56);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

	// printf("\033[0;35m\nTest pour |%%-.3d|\033[0m\n\n");
	// i = printf("|%-6.3d|\n", 56);
	// j = ft_printf("|%-6.3d|\n", 56);
	// if (i == j)
	// 	puts("\n\033[0;32m TEST OK");
	// else
	// {
	// 	puts("\n\033[0;31mTEST FAILED");
	// 	printf("return printf :\t\t[%d]\n", i);
	// 	printf("return ft_printf :\t[%d]", j);
	// 	printf("\n");
	// }

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