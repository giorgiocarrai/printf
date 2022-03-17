NAME = libftprintf.a

SRCS = 	ft_printf.c \
		ft_printf_utils.c \
		ft_ptr_utils.c \
		ft_nbr_utils.c \
		ft_unsigned_utils.c \
		ft_hex_utils.c \

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

		ar rcs ${NAME} ${OBJS}
bonus:	${NAME}
all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all