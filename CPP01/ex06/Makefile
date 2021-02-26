NAME = weapon

CFLAGS  = -Wall -Wextra -Werror 

SRCS = 	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \

OBJ_NAME = $(SRCS:.cpp=.o)


$(NAME) : $(OBJ_NAME)
	@rm -rf $(NAME)
	@clang++ $(CFLAGS) -o $(NAME) $(OBJ_NAME)
	@echo "\033[33m[Done !]"


all : $(NAME)

clean :
	rm -rf $(OBJ_NAME) 

fclean : clean
	rm -rf $(NAME)

re : fclean all