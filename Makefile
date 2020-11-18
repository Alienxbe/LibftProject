BLACK		= $(shell tput -Txterm setaf 0)
RED			= $(shell tput -Txterm setaf 1)
GREEN		= $(shell tput -Txterm setaf 2)
YELLOW		= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
PURPLE		= $(shell tput -Txterm setaf 5)
BLUE		= $(shell tput -Txterm setaf 6)
WHITE		= $(shell tput -Txterm setaf 7)
RESET		= $(shell tput -Txterm sgr0)

SRCS		=	ft_memset.c \
				ft_strlen.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})

NAME		=	libft.a

CC			=	@gcc
CFLAGS		=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}
	@echo "${YELLOW}Compilation of $<...${RESET}"

${NAME}:	${OBJS}
	@ar -rcs $@ $^
	@echo "${GREEN}Library created !${RESET}"

all:		${NAME}

clean:
	@rm -f ${OBJS}
	@echo "${PURPLE}Cleaning ojects.${RESET}"

fclean:
	@rm -f ${OBJS}
	@rm -f ${NAME}
	@echo "${RED}Full clean.${RESET}"

re:			fclean all

reclean:	re clean

.PHONY:		all clean fclean re reclen
