NAME		=	fragfrag
CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -f

SRCS		=	main.cpp		\
				ClapTrap.cpp	\
				ScavTrap.cpp	\
				FragTrap.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -c
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
