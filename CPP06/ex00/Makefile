NAME = convert

SRC := 	main.cpp \
		ScalarConverter.cpp


OBJ := $(SRC:.cpp=.o)

CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -g
#CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

.PHONY: all bonus clean fclean re

all:$(NAME)

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC)
	c++ -c $(CXXFLAGS) $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) 
re: fclean all