NAME = GlobalBanksters

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp

INCLUDES = Account.hpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp ${INCLUDES}
	c++ ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	c++ $^ -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
