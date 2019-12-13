/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:30:24 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 14:26:49 by aurbuche    ###    #+. /#+    ###.fr     */
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
# include "libft/libft.h"

/*
** -------------------------- Structure Definition ---------------------------
*/

typedef struct	s_option
{
	va_list			ap;
	int				flags[7];
	long long int	width;
	long long int	preci;
	char			*buffer;
	int				b;
	unsigned int	u;
}				t_option;

/*
** -------------------------- Function Definiton ----------------------------
*/

t_option		*ft_init_struct(void);
char			*ft_itoa_base(unsigned int n, char *base);
char			*ft_itoa_p_base(unsigned long n, char *base);
char			ft_find_converter(char c);
int				ft_printf(const char *format, ...);
int				ft_loop(char *fmt, size_t i, t_option *option, va_list ap);
int				ft_verif_char(char c, char *str);
void			ft_switch(size_t c, t_option *option, va_list ap);
void			ft_write_til_percent(char *fmt, size_t i);
void			ft_4_alpha(t_option *option, char c, va_list ap);
void			ft_4_digit(t_option *option, char c, va_list ap);
void			ft_4_x(t_option *option, char c, va_list ap);
void			ft_4_p(va_list ap);

#endif
