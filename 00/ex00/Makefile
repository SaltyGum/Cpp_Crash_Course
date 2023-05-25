NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all:
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -c
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o megaphone

$(NAME): all

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) megaphone

re: fclean all
