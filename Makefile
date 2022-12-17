# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 09:48:43 by ranki             #+#    #+#              #
#    Updated: 2022/12/17 12:47:46 by ranki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC = ft_checksorted.c ft_lstclear.c ft_lstsize.c ft_quick_sort.c ft_simply.c ft_strcmp.c \
ft_lstadd_back.c ft_lstlast.c ft_printlistcolor.c ft_rotate.c ft_sort_12.c ft_swap.c \
ft_checkdouble.c ft_lstadd_front.c ft_lstnew.c ft_push.c ft_rrotate.c ft_sort_3.c push_swap.c\

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) $(SRC) -c 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all

.PHONY : all clean fclean re

