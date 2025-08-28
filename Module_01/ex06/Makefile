NAME = Harl

SRCS = Harl.cpp main.cpp

INCLUDES = Harl.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

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
