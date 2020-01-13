# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/15 10:26:14 by aurbuche     #+#   ##    ##    #+#        #
#    Updated: 2020/01/13 16:35:18 by aurbuche    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #
 
SRCS_PRINTF		=		ft_printf.c ft_4_digit.c ft_4_x.c ft_4_alpha.c ft_4_p.c\
						ft_4_percent.c ft_switch.c ft_write_til.c ft_find_flag.c\
						ft_is.c ft_width.c ft_ctos.c

SRCS_LIB			=		$(addprefix libft/, ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c\
							ft_memccpy.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c\
							ft_split.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncmp.c\
							ft_strrchr.c ft_substr.c ft_toupper.c ft_atoi.c ft_calloc.c ft_isalpha.c\
							ft_isdigit.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memset.c\
							ft_putendl_fd.c ft_putstr_fd.c ft_strcat.c ft_strcpy.c ft_strjoin.c\
							ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strndup.c ft_strnlen.c ft_strnjoin.c\
							ft_strtrim.c ft_tolower.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putendl.c\
							ft_itoa_base.c ft_itoa_p_base.c)

SRCS_PATH	=	./

SRCS = $(addprefix $(SRC_PATH), $(SRCS_PRINTF), $(SRCS_LIB))

OBJ = ${SRCS_PRINTF:.c=.o} ${SRCS_LIB:.c=.o}
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./libftprintf.h

all :			 ${NAME}

$(NAME) : $(OBJ) $(HEADER)
				@echo "\033[0m"
				ar rcs $(NAME) $(OBJ)
				@echo "\033[0m"
				@echo "\033[38;2;0;128;0mCompiling ft_printf.a...\tDONE"

%.o: $(SRCS_PATH)%.c $(HEADER)
				@${CC} ${CFLAGS}  -c $< -o $@
				@echo "\033[38;2;250;240;197mCompiling objects file...$<"
				@echo "\033[38;2;0;128;0mDone"
clean :
				@${RM} ${OBJ}
				@echo "\033[38;2;165;38;10mDeleting objects file...\t\033[38;2;0;128;0mDONE\033[0m"

fclean :		clean
				@${RM} ${NAME}
				@echo "\033[38;2;165;38;10mDeleting ft_printf.a...\t\t\033[38;2;0;128;0mDONE\033[0m"
				
re :			fclean all
.PHONY :		all clean fclean re