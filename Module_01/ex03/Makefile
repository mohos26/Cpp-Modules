NAME = Weapon

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

INCLUDES = HumanA.hpp HumanB.hpp Weapon.hpp

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
