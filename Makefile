# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 08:33:19 by ablaamim          #+#    #+#              #
#    Updated: 2022/03/10 12:26:41 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_statistics

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRCS = ft_statistics.c \
	   ft_utils.c \
	   ft_utils_2.c \
	   ft_utils_3.c

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $^ -o $@


clean :
	rm -rf $(OBJS) $

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
