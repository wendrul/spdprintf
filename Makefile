SRCS	=	srcs/strlen.c\
		srcs/putstr.c\
		srcs/format_is_valid.c\
		srcs/count_args.c\
		srcs/spdprintf.c\
		srcs/putnbr.c\
		srcs/ft_putnbr_base.c\
		main.c

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

INCLS	=	include/ 

NAME	=	printf_test

CFLAGS	=	-Wall -Werror -Wextra -I${INCLS}

RM	=	rm -f

CC	=	clang

RED     =   \033[0;31m
GREEN   =   \033[0;32m
YELLOW  =   \033[0;33m
BLUE    =   \033[0;34m
MAGENTA =   \033[0;35m
CYAN    =   \033[0;36m
RESET   =   \033[0m

${NAME}:	${OBJS}
			@${CC} -lm ${CFLAGS} ${OBJS} -o ${NAME}
			@printf "$(CYAN)Succesfully created $(GREEN)$(NAME)$(RESET)\n"

all:		${NAME}

%.o:		%.c include/header.h
			@$(CC) -c  $(CFLAGS) $< -o $@ 
clean:		
			@${RM} ${OBJS}
			@printf "$(CYAN)Cleaning all $(MAGENTA)OBJECT FILES$(RESET)\n"

fclean:		clean
			@printf "$(YELLOW)WE CLEAN EVEN THE \033[1;33mBINARIES $(YELLOW)OMG!\n$(RESET)"
			@${RM} ${NAME}

re:			fclean all
			@printf "$(CYAN)Anyobody watching re-zero?\n$(RESET)"

gud:		all clean

.PHONY:		all clean fclean re gud
