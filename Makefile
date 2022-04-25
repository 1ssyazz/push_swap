SRC_HANDLE_ARGS	=	./handle_args/args.c \
					./handle_args/init.c

SRC_OPERATIONS	=	./operations/print/rotate_2.c \
					./operations/print/rotate.c \
					./operations/print/push.c \
					./operations/print/swap.c \
					./operations/operations.c \
					./operations/rotator_swapper.c

SRC_UTILS		=	./utils/if_!correct_order/correct_order.c \
					./utils/if_!correct_order/indexing_list.c \
					./utils/if_!correct_order/list_sorting.c \
					./utils/if_!correct_order/swap_list.c \
					./utils/if_solve_five/absolute.c \
					./utils/if_solve_five/list_size.c \
					./utils/have_value.c \
					./utils/sorter_utils.c \
					./utils/utils.c

SRC_MAIN		=	./clear.c \
					./loop.c \
					./push_swap.c \
					./solve_five.c \
					./solve.c \
					./sorter.c

OBJS_HANDLE_ARGS	=	${SRC_HANDLE_ARGS:.c=.o}
OBJS_OPERATIONS		= 	${SRC_OPERATIONS:.c=.o}
OBJS_UTILS			=	${SRC_UTILS:.c=.o}
OBJS_MAIN			=	${SRC_MAIN:.c=.o}

INCLUDE	=	./push_swap.h

CFLAGS	=	-Wall -Wextra -Werror

LEAKS	=	valgrind --leak-check=full --show-leak-kinds=all -s -q

NAME	=	push_swap

CC		=	gcc -g3
RM		=	rm -f

all:	${NAME}

.c.o:	${CC} ${CFLAGS} -I$(INCLUDE) -c  $< -o ${<:.c=.o}

$(NAME): $(OBJS_HANDLE_ARGS) $(OBJS_OPERATIONS) $(OBJS_UTILS) $(OBJS_MAIN)
			${CC} ${CFLAGS} -I$(INCLUDE) -o $(NAME) $(OBJS_HANDLE_ARGS) $(OBJS_OPERATIONS) $(OBJS_UTILS) $(OBJS_MAIN)

clean:	
			${RM} $(OBJS_HANDLE_ARGS) $(OBJS_OPERATIONS) $(OBJS_UTILS) $(OBJS_MAIN)

fclean:	clean
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
