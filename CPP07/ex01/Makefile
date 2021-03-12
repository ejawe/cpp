NAME		=	iter

SRCS		=	main.cpp

CC			=	clang++

OBJS		=	$(SRCS:.cpp=.o)

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CPPFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all