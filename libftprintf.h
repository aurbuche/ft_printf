/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:30:24 by aurelienbuc       #+#    #+#             */
/*   Updated: 2020/02/27 17:31:49 by aurbuche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/*
** --------------------------- External Headers ------------------------------
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
	char			*buffer;
	char			*rprint;
	char			*width;
	char			converter;
	char			flag;
	size_t			nflag;
	size_t			hyphen;
	size_t			preci;
	size_t			rvalue;
	size_t			percent;
	size_t			zero;
	size_t			lentot;
	size_t			npercent;
	size_t			no;
	int				w;
	int				h;
	int				o;
	size_t			p;
	int				z;
	int				neg;
	int				f;
	int				i;
	size_t			j;
	int				wn;
}				t_option;

/*
** -------------------------- Function Definiton ----------------------------
*/

t_option		*ft_init_struct(void);
int				ft_printf(const char *format, ...);
int				ft_4_digit2(t_option *option, int i);
int				ft_loop(char *fmt, size_t i, t_option *option, va_list ap);
int				ft_find_converter(char c, t_option *option);
int				ft_find_flag(char *str, size_t n, t_option *option);
int				ft_is_converter(char c);
int				ft_is_flag(char fmt);
int				ft_len_nb(char *str, int i);
int				ft_switch(t_option *option, va_list ap, char *str, int i);
int				ft_verif_char(char c, char *str);
void			ft_all_to_zero(t_option *option);
void			ft_change(char **str, size_t i, va_list ap);
void			ft_display(t_option *option);
void			ft_free_struct(t_option *option);
void			ft_hyphen(t_option *option, char *str, int i);
void			ft_precision(t_option *option, char *str, size_t i);
void			ft_set_hyphen_preci(t_option *option);
void			ft_write_til_end(char *fmt, size_t i);
void			ft_write_til_percent(char *fmt, size_t i);
void			ft_write_til_percent2(char *fmt, size_t i, size_t j);
void			ft_4_alpha(t_option *option, va_list ap);
void			ft_4_c(t_option *option, va_list ap);
void			ft_4_di(t_option *option, va_list ap);
void			ft_4_x(t_option *option, va_list ap);
void			ft_4_p(t_option *option, va_list ap);
void			ft_4_percent(t_option *option, char *str, int i);
void			ft_4_u(t_option *option, va_list ap);
void			ft_width(t_option *option, va_list ap);
void			ft_set_flag(t_option *option);
void			ft_set_precision(t_option *option);
void			ft_set_preci_field(t_option *option, int i);
void			ft_set_width(t_option *option);
void			ft_set_hyphen(t_option *option);
void			ft_set_field(t_option *option);
void			ft_set_pandw(t_option *option);
void			ft_set_pwz(t_option *option);
void			ft_set_zandh(t_option *option);
void			ft_set_zandp(t_option *option);
void			ft_set_zandw(t_option *option);
void			ft_set_zero(t_option *option);
void			ft_spe(t_option *option);
void			ft_zero(t_option *option, char *str, size_t i);
char			*ft_ctos(char c);
char			*ft_create_str(char c);
char			*ft_insert(char *src, char *insered, size_t n, int len);
size_t			ft_else(t_option *option, size_t i);
size_t			ft_size_field(t_option *option, char *str, size_t i);
size_t			ft_loop2(t_option *option, char *str, size_t i);
size_t			ft_loop3(t_option *option, size_t i, va_list ap, char *str);
size_t			ft_loop4(t_option *option, char *fmt, size_t i);
t_option		*ft_init_struct(void);

#endif
