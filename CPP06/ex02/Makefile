# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 10:52:52 by hsirenko          #+#    #+#              #
#    Updated: 2025/01/22 09:18:47 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = RealType
SRC = main.cpp RealType.cpp

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