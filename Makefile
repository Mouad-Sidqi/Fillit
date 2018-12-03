# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Mokefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 21:00:25 by mmaaouni          #+#    #+#              #
#    Updated: 2018/11/10 22:05:43 by mmaaouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FILES = src/*.c
LIB = libft/libft.a
DIR = libft

all: $(NAME)

$(NAME): $(FILES) $(LIB)
	gcc -Wall -Wextra -Werror -o fillit $(FILES) $(LIB)
$(LIB):
	make -C $(DIR) re
clean:
	make -C $(DIR) clean
fclean: clean
	/bin/rm -f $(NAME)
	make -C $(DIR) fclean
re: fclean $(NAME)
