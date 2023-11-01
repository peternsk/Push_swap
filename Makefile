
#basic
NAME    	=   push_swap
CC      	=	gcc
FLAGS  		=	-Wall -Werror -Wextra #-T{INC_DIR}
RM      	=	rm -rf

#folders
INC_DIR 	= include
SRCS_DIR 	= srcs
OBJS_DIR 	= objs
	
PARSING 	= push_swap ft_sign_in_str
UTILS 		= create_stack ft_allow_char ft_struct init_list printstack add_node_to_end \
				count_node check_dup_data is_stack_sorted

MOVES		= move_sa

SRCS 		= $(addsuffix .c, $(addprefix srcs/parsing/, $(PARSING))) \
	  			$(addsuffix .c, $(addprefix srcs/utils/, $(UTILS))) \
				$(addsuffix .c, $(addprefix srcs/moves/, $(MOVES)))

OBJS 		= $(addprefix ${OBJS_DIR}/, $(subst srcs/,,$(SRCS:.c=.o)))

LIBFT_PATH = include/libft
LIBFT_LIB = ${LIBFT_PATH}/libft.a
LIBFT_INC = ${LIBFT_PATH}/include

GREEN	= \033[32;1m
CYAN	= \033[36;1m
RED		= \033[0;31m
BOLD	= \033[1m
RESET	= \033[0m
MAGENTA	=\033[0;95m

all: ${LIBFT_LIB} ${NAME}

${LIBFT_LIB}:
	@make -C ${LIBFT_PATH}

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.c
	@mkdir -p ${@D}
	@${CC} ${FLAGS} -I ${INC_DIR} -I ${LIBFT_INC} -c $< -o $@
	@echo "$(GREEN)Compiling: $<$(RESET)$(MAGENTA)              [OK]$(RESET)"

${NAME}: ${OBJS}
	@${CC} ${FLAGS}  ${OBJS} ${LIBFT_LIB} -o ${NAME}
	@echo "$(GREEN)Compilation terminé avec succès !"

clean:
	@make clean -C ${LIBFT_PATH}
	@${RM} ${OBJS_DIR}
	@echo "$(RED)$(BOLD)Nettoyage effectué avec succès !"

fclean:	clean
	@make fclean -C ${LIBFT_PATH}
	@${RM} ${NAME}

re: fclean all
	@echo "$(CYAN)Recompilation Terminé !"

.PHONY: all clean fclean re