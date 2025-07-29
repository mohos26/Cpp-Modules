NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Contact.cpp Exit.cpp PhoneBook.cpp addContact.cpp main.cpp showTable.cpp strip.cpp

INCLUDES = PhoneBook.hpp Contact.hpp header.hpp

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
