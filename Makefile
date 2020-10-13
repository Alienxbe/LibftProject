GREEN		=	\e[38;5;2m
RED			=	\e[38;5;1m
DRED		=	\e[38;5;52m
YELLOW		=	\e[38;5;3m
NC			=	\e[0m

SRCS		=	ft_memset.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})

NAME		=	libft.a

CC			=	@gcc
CFLAGS		=	-Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}
				@echo "${YELLOW}Compilation of $<...${NC}"

${NAME}:	${OBJS}
				@ar -rcs $@ $^
				@echo "${GREEN}Library created !${NC}"

all:		${NAME}

clean:
				@rm -f ${OBJS}
				@echo "${RED}Cleaning ojects.${NC}"

fclean:
				@rm -f ${OBJS}
				@rm -f ${NAME}
				@echo "${DRED}Full clean.${NC}"

re:			fclean all

.PHONY:		all clean fclean re