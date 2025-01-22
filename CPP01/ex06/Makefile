# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 17:25:06 by hsirenko          #+#    #+#              #
#    Updated: 2024/12/28 18:03:29 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -v
LDFLAGS =
TARGET = harlFilter
SRC = main.cpp Harl.cpp

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