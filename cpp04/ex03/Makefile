# VARIABLE DECLARATION ############################################################################

NAME =			Character

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
				./srcs/AMateria.cpp \
				./srcs/Character.cpp \
				./srcs/Ice.cpp \
				./srcs/Cure.cpp \
				./srcs/MateriaSource.cpp \

OBJS =			$(SRCS:.cpp=.o)

# RULES ###########################################################################################

all: $(NAME)
$(NAME): $(OBJS)
	echo "$(CYAN)Compiling Character :$(WHITE)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)Character successfully compiled !$(WHITE)"

./srcs/%.o: ./srcs/%.cpp $(HEADERS)/AMateria.hpp $(HEADERS)/Character.hpp $(HEADERS)/Ice.hpp $(HEADERS)/Cure.hpp $(HEADERS)/ICharacter.hpp $(HEADERS)/IMateriaSource.hpp $(HEADERS)/MateriaSource.hpp
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
