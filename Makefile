# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 16:32:25 by tbornema          #+#    #+#              #
#    Updated: 2023/09/15 12:11:33 by tbornema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES	= 	main.c					\
				handlesort.c			\
				ssort.c					\
				psort.c					\
				rsort.c					\
				rrsort.c				\
				printtable.c			\
				countingsort.c			\
				ft_getdigit.c			\
				ft_countingsortdigit.c	\
				ft_radixsort.c			\
				ft_mergestacks.c		\

NAME	= push_swap

OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
RM	= rm -f
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -g
INCS	= -I ./libft
LIBFT	= -Llibft -lft
GEN	= $(shell seq -5000 5000 | shuf -n 50 | tr '\n' ' ')
CHECK	= ./tests/checker_linux
VALGRIND = valgrind --leak-check=full --track-origins=yes

${OBJ_DIR}/%.o: %.c push_swap.h | $(OBJ_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@

${NAME}: runlibft $(OBJ)
	@echo "Linking: $@"
	${CC} ${OBJ} ${CFLAGS} ${LIBFT} -o $@ -no-pie
	@echo "Compiling Done!"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

ignore: runlibft $(OBJ)
	${CC} $(OBJ) $(CFLAGS) ${LIBFT} -o ${NAME}

all: ${NAME}

clean:
	${RM} $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@make -C libft fclean

re: fclean all

runlibft:
	make -C libft

run:
	./$(NAME) ${GEN}

runmem:
	@${VALGRIND} ./$(NAME) ${GEN}

run_checker:
	ARG=${GEN}; ./$(NAME) $$ARG | ./${CHECK} $$ARG 

norm:
	norminette -R CheckForbiddenSourceHeader ${SRC_FILES}
	norminette -R CheckDefine ${INCS}

.PHONY: all re clean fclean