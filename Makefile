/**vim 42 header**/

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= *.c
OBJ		= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)	

fclean: clean
	rm -f $(NAME)

re: fclean all
