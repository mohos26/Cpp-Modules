NAME = bsp

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp

INCLUDES = Point.hpp Fixed.hpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp $(INCLUDES)
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
