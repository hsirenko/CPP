# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 10:52:52 by hsirenko          #+#    #+#              #
#    Updated: 2025/07/15 23:52:19 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = PmergeMe
SRC = main.cpp PmergeMe.cpp
HEADERS = PmergeMe.hpp

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# Clean up build files
clean:
	rm -f $(TARGET)

fclean : clean
		rm -f $(TARGET)

re: fclean all

# Phony targets
.PHONY: all clean fclean re