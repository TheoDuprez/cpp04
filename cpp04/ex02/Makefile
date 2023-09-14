# VARIABLE DECLARATION ############################################################################

NAME =			Brain

CC =			c++

CFLAGS =		-Wall -Werror -Wextra -std=c++98

HEADERS =		./includes

BLACK	= 		\033[0;30m
RED		= 		\033[0;91m
GREEN	= 		\033[0;92m
YELLOW	= 		\033[0;93m
BLUE	= 		\033[0;94m
PURPLE	= 		\033[0;35m
CYAN	= 		\033[0;96m
WHITE	= 		\033[0;37m

SRCS =			./srcs/main.cpp \
				./srcs/Animal.cpp \
				./srcs/Cat.cpp \
				./srcs/Dog.cpp \
				./srcs/WrongAnimal.cpp \
				./srcs/WrongCat.cpp \
				./srcs/Brain.cpp \

OBJS =			$(SRCS:.cpp=.o)

# RULES ###########################################################################################

all: $(NAME)
$(NAME): $(OBJS)
	echo "$(CYAN)Compiling Brain :$(WHITE)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)Brain successfully compiled !$(WHITE)"

./srcs/%.o: ./srcs/%.cpp $(HEADERS)/Animal.hpp $(HEADERS)/Cat.hpp $(HEADERS)/Dog.hpp $(HEADERS)/WrongAnimal.hpp $(HEADERS)/WrongCat.hpp $(HEADERS)/Brain.hpp
	$(CC) $(CFLAGS) -I$(HEADERS) -c $< -o $@

clean:
	echo "$(YELLOW)Deleting all files exept binaries$(WHITE)"
	rm -rf $(OBJS)

fclean: clean
	echo "$(PURPLE)Deleting binaries$(WHITE)"
	rm -rf $(NAME)

re:
	make -s fclean
	make -s all

.SILENT:

.PHONY: all clean fclean re
