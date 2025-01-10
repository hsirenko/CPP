# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 23:58:27 by helensirenk       #+#    #+#              #
#    Updated: 2025/01/10 00:16:43 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = AnimalSounds
SRC = main.cpp Animals.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# Clean up build files
clean:
	rm -f $(TARGET)

fclean : clean
		rm -f $(TARGET)

re: fclean all

# Phony targets
.PHONY: all clean fclean re