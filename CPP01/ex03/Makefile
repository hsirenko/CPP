# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 17:25:06 by hsirenko          #+#    #+#              #
#    Updated: 2024/12/20 16:19:02 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -v
LDFLAGS =
TARGET = unnecessary_violence
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# Clean up build files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean