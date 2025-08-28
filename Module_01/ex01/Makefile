NAME = zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp Zombie.hpp
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
