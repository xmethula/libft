# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmethula <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 09:42:44 by xmethula          #+#    #+#              #
#    Updated: 2019/06/05 13:58:31 by xmethula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= *.c
OBJ			= $(FILES:%.c=%.o)

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
