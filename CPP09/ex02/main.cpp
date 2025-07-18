/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 07:29:57 by helensirenk       #+#    #+#             */
/*   Updated: 2025/07/17 07:48:29 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "Please provide at least one number as an argument." << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        std::string input = argv[i];
        if (input.empty() || input == "0" || !std::all_of(input.begin(), input.end(), ::isdigit)) {
            std::cerr << "Invalid input: " << input << ". Only positive integers are allowed." << std::endl;
            return 1;
        }
    }

    std::vector<int> vector;
    for (int i = 1; i < argc; i++) {
        vector.push_back(std::atoi(argv[i]));
    }

    std::deque<int> deq(vector.begin(), vector.end());

    std::cout << "Before: ";
    printSequence(vector);

    clock_t startVec = clock();
    mergeSort(vector);
    clock_t endVec = clock();


    clock_t startDeq = clock();
    mergeSort(deq);
    clock_t endDeq = clock();


    std::cout << "After: ";
    printSequence(deq);

    std::cout << "Time to process a range of " << vector.size() << " elements with std::[..] : " << (endVec - startVec) << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::[..] : " << (endDeq - startDeq) << " us" << std::endl;
    
    return 0;
}