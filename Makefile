SRCS	=	srcs/*.c \
		main.c

OBJS	=	${SRCS:.c=.o}

INCLS	=	include/

NAME	=	printf_test

CFLAGS	=	-Wall -Werror -Wextra -I${INCLS}

RM	=	rm -f

CC	=	gcc


${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

gud:		all clean

.PHONY:		all clean fclean re gud
