# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/15 10:26:14 by aurbuche     #+#   ##    ##    #+#        #
#    Updated: 2019/11/28 17:01:55 by aurbuche    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #
 
SRC =	ft_printf.c ft_strcpy.c ft_strcat.c \
		ft_strlen.c ft_putstr.c ft_putnbr.c ft_putchar.c \
		ft_strdup.c main.c 

OBJ = ${SRC:.c=.o}
NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ft_printf.h

$(NAME) : $(OBJ)
				@echo "\033[0m"
				ar rcs ${NAME} ${OBJ}
				@echo "\033[0m"
				@echo "\033[38;2;0;128;0mCompiling ft_printf.a...\tDONE"
				@echo "\033[38;2;138;59;151mYou can use your program"

all :                   ${NAME}

%.o: %.c $(HEADER)
				@${CC} ${CFLAGS} -c $< -o $@
				@echo "\033[38;2;250;240;197mCompiling objects file...$<"
				@echo "\033[38;2;0;128;0mDone"
clean :
				@${RM} -f *.o
				@echo "\033[38;2;165;38;10mDeleting objects file...\t\033[38;2;0;128;0mDONE"
fclean :		clean
				@rm -f ${NAME}
				@echo "\033[38;2;165;38;10mDeleting ft_printf.a...\t\033[38;2;0;128;0mDONE"
				
re :			fclean all
.PHONY :		all clean fclean re