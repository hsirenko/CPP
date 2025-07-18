/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 07:29:57 by helensirenk       #+#    #+#             */
/*   Updated: 2025/07/18 22:59:06 by hsirenko         ###   ########.fr       */
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
        if (input.empty() || input == "0" || !is_digits(input)) {
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

	//convert clock ticks to microseconds
	double timeVecUs = (double)(endVec - startVec) / CLOCKS_PER_SEC * 1e6;
	double timeDeqUs = (double)(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;


    std::cout << "After: ";
    printSequence(deq);

	std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << vector.size() << " elements with std::[..] : " << timeVecUs << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::[..] : " << timeDeqUs << " us" << std::endl;
    
    return 0;
}