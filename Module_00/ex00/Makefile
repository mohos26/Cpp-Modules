NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	c++ $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
