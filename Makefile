SRCS	=	srcs/strlen.c\
		srcs/putstr.c\
		srcs/format_is_valid.c\
		srcs/count_args.c\
		srcs/spdprintf.c\
		main.c

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

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
