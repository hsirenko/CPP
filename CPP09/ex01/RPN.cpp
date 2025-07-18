/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:53:20 by helensirenk       #+#    #+#             */
/*   Updated: 2025/07/18 23:05:23 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isValidRPN(const std::string &input)
{
    std::istringstream iss(input);
    std::string token;
    while (iss >> token)
    {
        if (token.length() == 1 && (token[0] >= '0' && token[0] <= '9'))
            continue;
        if (token == "+" || token == "-" || token == "*" || token == "/")
            continue;
        return false;
    }
    return true;
};

// void printStack(const std::stack<int> &stack) {
//     std::stack<int> temp = stack;
//     std::cout << "Current stack (top -> bottom): ";
//     while (!temp.empty()) {
//         std::cout << temp.top() << " ";
//         temp.pop();
//     }
//     std::cout << std::endl;
// };

int evaluateRPN(const std::string &input) {
    std::stack<int> stack;
    std::istringstream iss(input);
    std::string token;

    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.size() < 2) {
                std::cerr << "Error: not enough operands before operator '" << token << "'\n";
                return INT_MAX;
            }
            
            int right = stack.top(); stack.pop();
            int left = stack.top(); stack.pop();
            
            int result = 0;
            if (token == "+")
                result = left + right;
            else if (token == "-")
                result = left - right;
            else if (token == "*")
                result = left * right;
            else if (token == "/") {
                if (right == 0) {
                    std::cerr << "Error: Division by zero\n";
                    return INT_MAX;
                }
                result = left / right;
            }
            
            stack.push(result);
            //std::cout << "Applied operator '" << token << "' : " << left << token << right << " = " << result << std::endl;
            //printStack(stack);            
        }
        else {
            try {
				std::istringstream iss(token);
                int number;
				iss >> number;
                stack.push(number);
               // std::cout << "Pushed number: " << number << std::endl;
                //printStack(stack);
            } catch (...) {
                std::cerr << "Error: Invalid token: " << token << std::endl;
                return INT_MAX;
            }
        }
    }

    if (stack.size() != 1) {
        std::cerr << "Error: invalid expression, final stack size =" << stack.size() << std::endl;
        return 1;
    }
    
    return stack.top();
}

