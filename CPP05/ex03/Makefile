# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 10:52:52 by hsirenko          #+#    #+#              #
#    Updated: 2025/01/17 22:19:16 by helensirenk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = Intern
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# Clean up build files
clean:
	rm -f $(TARGET)
	find . -type f ! -name "*.*" -not -name "Makefile" -exec rm -f {} \;  # Remove files without extensions excluding Makefile

fclean : clean
		rm -f $(TARGET)
		find . -type f ! -name "*.*" -not -name "Makefile" -exec rm -f {} \;  # Remove files without extensions excluding Makefile

re: fclean all

# Phony targets
.PHONY: all clean fclean re