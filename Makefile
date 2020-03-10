# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurbuche <aurbuche@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 10:26:14 by aurbuche          #+#    #+#              #
#    Updated: 2020/03/10 17:33:58 by aurbuche         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_PRINTF		=		ft_printf.c ft_change.c ft_insert.c ft_is.c ft_switch.c\
						ft_4_digit.c ft_display.c ft_set_flag.c ft_set_precision.c\
						ft_4_alpha.c ft_set_field.c ft_ctos.c ft_write_til.c\
						ft_4_x.c ft_4_alpha.c ft_4_p.c ft_4_c.c\
						ft_set_preci_field.c ft_all_to_zero.c ft_find_converter.c\
						ft_init_struct.c ft_insert_stars.c ft_check_error.c ft_free_struct.c

SRCS_LIB		=		$(addprefix libft/, ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c\
						ft_memccpy.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c\
						ft_split.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncmp.c\
						ft_strrchr.c ft_substr.c ft_toupper.c ft_atoi.c ft_calloc.c ft_isalpha.c\
						ft_isdigit.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memset.c\
						ft_putendl_fd.c ft_putstr_fd.c ft_strcat.c ft_strcpy.c ft_strjoin.c\
						ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strndup.c ft_strnlen.c ft_strnjoin.c\
						ft_strtrim.c ft_tolower.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putendl.c\
						ft_itoa_base.c ft_itoa_p_base.c ft_delete.c ft_strfjoin.c ft_strncpy.c\
						ft_cchr.c ft_strcmp.c)

SRCS_PATH		=	./

SRCS 			=	$(addprefix $(SRC_PATH), $(SRCS_PRINTF), $(SRCS_LIB))

OBJ_NAME		=	${SRCS_PRINTF:.c=.o} ${SRCS_LIB:.c=.o}

OBJ				=	$(addprefix $(OBJ_PATH), $(OBJ_NAME))

OBJ_PATH		=	obj/

NAME 			=	libftprintf.a

CC				=	cc

CFLAGS			=	-Wall -Wextra -Werror -g3

RM				=	rm -rf

HEADER			=./libftprintf.h ./libft/libft.h

all : $(OBJ_PATH) ${NAME}
	@:

$(NAME) : $(OBJ) $(HEADER)
				@echo "\033[0m"
				ar rcus $(NAME) $(OBJ)
				@echo "\033[0m"
				@echo "\033[38;2;0;128;0mCompiling libftprintf.a...\tDONE"

$(OBJ_PATH)%.o: $(SRCS_PATH)%.c $(HEADER) Makefile
				@make -C libft NAME=../libftprintf.a
				@${CC} ${CFLAGS}  -c $< -o $@
				@echo "\033[38;2;250;240;197mCompiling objects file...$<"
				@echo "\033[38;2;0;128;0mDone"

norme : 		
				@norminette $(SRCS_PATH)

$(OBJ_PATH):
				@mkdir -p obj/ 2> /dev/null
				@mkdir -p obj/libft 2> /dev/null

clean :
				@${RM} ${OBJ}
				@${RM} libft/*.o
				@echo "\033[38;2;165;38;10mDeleting objects file...\t\t\033[38;2;0;128;0mDONE\033[0m"

fclean :		clean
				@${RM} ${NAME}
				@${RM} libft/libft.a
				@echo "\033[38;2;165;38;10mDeleting libft.a...\t\t\t\033[38;2;0;128;0mDONE\033[0m"
				@echo "\033[38;2;165;38;10mDeleting libtprintf.a...\t\t\033[38;2;0;128;0mDONE\033[0m"
				
re :			fclean all
.PHONY :		all clean fclean re