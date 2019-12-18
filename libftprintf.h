/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libftprintf.h                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:30:24 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:15:17 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

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
	char			*flags;
	char			*buffer;
	char			*stock;
	char			converter;
	int				b;
	unsigned int	u;
	size_t			accu;
	int				width;
	size_t			rvalue;
}				t_option;

/*
** -------------------------- Function Definiton ----------------------------
*/

t_option		*ft_init_struct(void);
char			*ft_itoa_base(unsigned int n, char *base);
char			*ft_itoa_p_base(unsigned long n, char *base);
int				ft_printf(const char *format, ...);
int				ft_loop(char *fmt, size_t i, t_option *option, va_list ap);
int				ft_verif_char(char c, char *str);
int				ft_find_converter(char c, t_option *option);
int				ft_is_converter(char c);
int				ft_is_flag(char c);
void			ft_stock_flag(char fmt, t_option *option);
void			ft_switch(t_option *option, va_list ap);
void			ft_write_til_percent(char *fmt, size_t i);
void			ft_4_alpha(t_option *option, va_list ap);
void			ft_4_digit(t_option *option, va_list ap);
void			ft_4_x(t_option *option, va_list ap);
void			ft_4_p(t_option *option, va_list ap);
char			*get_flag(char *fmt, t_option *option, size_t i);
int				get_width(t_option *option, char *fmt, int i);

#endif
