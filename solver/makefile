# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfuchs <pfuchs@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 12:13:51 by pfuchs            #+#    #+#              #
#    Updated: 2022/05/12 23:45:14 by pfuchs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src

# Compiler Variables
CC		= g++
CFLAGSS	= -Wall -Wextra -Werror -Wno-shadow -O3 -std=c++17
INCFLAG	= -I include
# File Variables
NAME	= n-puzzle
FILES	= main
CLASSES	= parse puzzle heuristics node solver
SRC		= $(addsuffix .cc,$(CLASSES) $(FILES))
HEADER	= $(addsuffix .h,$(CLASSES))
OBJ		= $(addprefix _bin/,$(notdir $(SRC:.cc=.o)))

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

_bin :
	mkdir _bin

_bin/%.o : %.cc | _bin
	$(CC) -c $(CFLAGSS) -MMD -MP $(INCFLAG) $< -o $@

clean:
	@rm -fr _bin

fclean:	clean
	@rm -f $(NAME)

re:		fclean all

all:	$(NAME)

.PHONY: clean fclean re all

-include $(OBJ:.o=.d)
