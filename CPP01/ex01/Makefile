# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 17:25:06 by hsirenko          #+#    #+#              #
#    Updated: 2024/12/19 17:25:24 by hsirenko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -v
LDFLAGS =
TARGET = zombie
SRC = Zombie.cpp main.cpp zombieHorde.cpp

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