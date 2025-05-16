# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 00:30:32 by kecheong          #+#    #+#              #
#    Updated: 2025/01/10 15:20:48 by kecheong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests
INTRA_TEST := intra_test

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -pedantic

srcs := main.cpp intra_main.cpp
objs := $(addprefix obj/, $(srcs:.cpp=.o))

.PHONY: all
all: $(NAME) $(INTRA_TEST)

$(NAME): $(objs)
	$(CXX) $(CXXFLAGS) main.cpp -o $(NAME)

$(INTRA_TEST): $(objs)
	$(CXX) $(CXXFLAGS) intra_main.cpp -o $(INTRA_TEST)

obj/%.o: %.cpp | obj
	$(CXX) $(CXXFLAGS) $< -c -o $@

obj:
	@mkdir -p obj/

.PHONY: clean
clean:
	$(RM) -r obj/

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: debug
debug: CXXFLAGS += -g3
debug: $(NAME)

.PHONY: fsan
fsan: CXXFLAGS += -fsanitize=address -g3
fsan: $(NAME)
