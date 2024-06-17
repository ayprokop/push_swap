NAME = push_swap

SRC = push_swap_utils.c\
	push_swap.c

OBJ = $(SRC:.c=.o)
CC = cc

FLAGS = -Wall -Wextra -Werror

LIB_DIR = ./libft
PRINT_DIR = ./ft_printf
LIB = ./libft/libft.a
PRINT = ./ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJ) $(LIB) $(PRINT)
	$(CC) $(FLAGS) $(SRC) -o $(NAME) $(LIB) $(PRINT)

$(LIB):
	make -C $(LIB_DIR)

$(PRINT):
	make -C $(PRINT_DIR)

clean:
	make clean -C $(LIB_DIR)
	make clean -C $(PRINT_DIR)
	rm $(OBJ)

fclean: clean
	make fclean -C $(LIB_DIR)
	make fclean -C $(PRINT_DIR)
	rm $(NAME)

re: fclean all