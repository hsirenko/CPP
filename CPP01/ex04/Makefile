# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 17:25:06 by hsirenko          #+#    #+#              #
#    Updated: 2024/12/27 21:21:17 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -v
LDFLAGS =
TARGET = replace
SRC = main.cpp

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