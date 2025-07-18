/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 07:29:11 by helensirenk       #+#    #+#             */
/*   Updated: 2025/07/18 22:11:37 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool CompareBySecond(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.second < b.second;
}

std::vector<int> GenerateJacobsthal(size_t n) {
    std::vector<int> indices;
    if (n == 0) 
        return indices;
    if (n == 1) { 
        indices.push_back(0); 
        return indices; 
    }
    indices.push_back(1);
    size_t k = 2;
    while (indices.size() < n) {
        for (size_t i = k; i < 2 * k && indices.size() < n; i++) {
            if (i < n)
                indices.push_back(i);
        }
        if (k >= n) break; // prevents infinite loop
        k *= 2;
    }
    indices.insert(indices.begin(), 0); // Always insert 0 first

    return indices;
}

bool is_digits(const std::string &str) {
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!std::isdigit(*it))
			return false;
	}
	return true;
}
