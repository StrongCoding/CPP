NAME = doggybrains

SRC := 	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp


OBJ := $(SRC:.cpp=.o)

CCFLAGS := -Wall -Wextra -Werror -std=c++98
#CCFLAGS := -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

.PHONY: all bonus clean fclean re

all:$(NAME)

$(NAME): $(OBJ)
	c++ $(CCFLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC)
	c++ -c $(CCFLAGS) $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) 
re: fclean all