NAME		=	Zombie
CC			=	g++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -f

SRCS		=	Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \
				main.cpp

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