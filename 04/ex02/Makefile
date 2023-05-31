NAME		=	zoo
CC			=	g++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -f

SRCS		=	main.cpp		\
				Animal.cpp		\
				Cat.cpp			\
				Dog.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp
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