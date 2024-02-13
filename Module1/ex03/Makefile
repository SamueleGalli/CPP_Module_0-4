C++ = c++

C++FLAGS = -g -Wall -Werror -Wextra -std=c++98

NAME =  violence_breeds_violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

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