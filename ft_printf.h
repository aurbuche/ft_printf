/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:30:24 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 11:10:11 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** -------------------------- External Headers ------------------------------
*/

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# define BUFFER_SIZE 10

/*
** -------------------------- Structure Definition ---------------------------
*/

typedef struct	s_option
{
	long long int	len;
	va_list			ap;
	int				flags[7];
	long long int	width;
	long long int	preci;
	int				mod;
	char			*nb_c;
	wchar_t			*word_w;
	char			*word_c;
	char			*prefix;
	char			*before;
	char			*final;
	char            *buffer[BUFFER_SIZE];
	int				size_flags;
	int				size_arg;
	int				sign;
	int				final_len;
	int				b;
	int				sub_word;
}				t_option;

/*
** -------------------------- Function Definiton ----------------------------
*/

char			*ft_strdup(char *s1);
char			*ft_strcpy(char *dest, const char *src);
int				ft_printf(const char *format, ...);
size_t			ft_strlen(char *str);
void			ft_bzero(void *b, size_t len);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_init_struct(t_option *option);

#endif