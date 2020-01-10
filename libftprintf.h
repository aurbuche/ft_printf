/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libftprintf.h                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 10:30:24 by aurelienbuc  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 16:38:10 by aurbuche    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/*
** ---------------- ---------- External Headers ------------------------------
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
	char			*rprint;
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
int				ft_printf(const char *format, ...);
int				ft_loop(char *fmt, size_t i, t_option *option, va_list ap);
int				ft_verif_char(char c, char *str);
int				ft_find_converter(char c, t_option *option);
int				ft_is_converter(char c);
int				ft_is_flag(char fmt, size_t i);
int				ft_find_flag(char *str, size_t n, t_option *option, va_list ap);
void			ft_switch(t_option *option, va_list ap, char *fmt);
void			ft_write_til_end(char *fmt, size_t i);
void			ft_write_til_percent(char *fmt, size_t i);
void			ft_4_alpha(t_option *option, va_list ap);
void			ft_4_digit(t_option *option, va_list ap);
void			ft_4_x(t_option *option, va_list ap);
void			ft_4_p(t_option *option, va_list ap);
void			ft_4_percent(t_option *option, char *fmt);
void			ft_width(t_option *option, va_list ap);
char			*ft_ctos(char c);
char			*ft_create_str(char c);

#endif
