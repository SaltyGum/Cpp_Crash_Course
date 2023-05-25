NAME = phonebook
SRCS = Phonebook.cpp \
	   Contact.cpp \
	   main.cpp
OBJS = $(SRCS:.cpp=.o)

all:
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -c
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o $(NAME)

$(NAME): all

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all
