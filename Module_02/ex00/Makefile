NAME = fixed

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Fixed.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp Fixed.hpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	c++ $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
