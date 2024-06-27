# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 16:18:38 by emimenza          #+#    #+#              #
#    Updated: 2024/06/19 16:18:38 by emimenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf
NAME = ex02

SRCS = srcs/Animal.cpp\
	   srcs/Cat.cpp\
	   srcs/WrongAnimal.cpp\
	   srcs/WrongCat.cpp\
	   srcs/Dog.cpp\
	   srcs/Brain.cpp\
	   main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run