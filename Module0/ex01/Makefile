C++ = c++

C++FLAGS = -g -Wall -Werror -Wextra -std=c++98

NAME = phonebook

SRC = main.cpp Contact.cpp

HEADERS = Phonebook.hpp Contact.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADERS)
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	rm -f $(SRC:.cpp=.o)

fclean : clean
	rm -f $(NAME)

re: fclean all