NAME		=	Fight
CC			=	g++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -f

SRCS		=	main.cpp	\
				HumanA.cpp	\
				HumanB.cpp	\
				Weapon.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -c
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all