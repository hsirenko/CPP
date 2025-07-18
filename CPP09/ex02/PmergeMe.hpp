/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 07:29:31 by helensirenk       #+#    #+#             */
/*   Updated: 2025/07/18 22:58:48 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMEREGEME_HPP
#define PMEREGEME_HPP

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <deque>
#include <algorithm>
#include <cctype>
#include <ctime>
#include <iomanip>

// operator overload for std::pair<int, int>
inline std::ostream& operator<<(std::ostream &os, const std::pair<int, int> &p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
};

bool CompareBySecond(const std::pair<int, int> &a, const std::pair<int, int> &b);
std::vector<int> GenerateJacobsthal(size_t max);
bool is_digits(const std::string &str);

// Print any sequence (vector, deque, etc.)
template<typename T>
void printSequence(const T &sequence) {
    for (typename T::const_iterator it = sequence.begin(); it != sequence.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

}

template<typename T>
void mergeSort(T &container) {
    if (container.size() <= 1)
        return;

    // Step 1: Create pairs
    std::vector<std::pair<int, int> > pairs;
    typename T::iterator it = container.begin();
    while (it != container.end()) {
        int first = *it++;
        int second = (it != container.end()) ? *it++ : -1;
        if (second != -1 && first > second)
            std::swap(first, second);
        pairs.push_back(std::make_pair(first, second));
    }
    //std::cout << "DEBUG: ";
    //printSequence(pairs);

    // Step 2: Sort pairs by the second (max) element
    std::sort(pairs.begin(), pairs.end(), CompareBySecond);

    // Step 3: Build main chain from max elements, pend from min elements
    T mainChain;
    std::vector<int> pend;
    for (size_t i = 0; i < pairs.size(); i++) {
        if (pairs[i].second != -1)
            mainChain.push_back(pairs[i].second);
        if (pairs[i].first != -1)
            pend.push_back(pairs[i].first);
    }

//    std::cout << "mainChain: ";
//     printSequence(mainChain);
//     std::cout << "pend: ";
//     printSequence(pend);

    // Step 4: Insert pend elements in Jacobsthal order (skip the first pend element)
    std::vector<int> JacobsthalSeq = GenerateJacobsthal(pend.size());

    // std::cout << "JacobsthalSeq: ";
    // printSequence(JacobsthalSeq);
    
    // Insert pend elements
    if (!pend.empty()) {
		typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pend[0]);
		mainChain.insert(pos, pend[0]);
	}
	for (size_t j = 1; j < JacobsthalSeq.size(); ++j) {
        size_t idx = JacobsthalSeq[j];
		if (idx == 0)
			continue;
        if (idx >= pend.size())
            continue;
        int insertVal = pend[idx];
        typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), insertVal);
		mainChain.insert(pos, insertVal);
        // if (pos == mainChain.end() || *pos != insertVal) { // this was checking for duplicates
        //     //std::cout << "Inserting " << insertVal << " at position " << (pos - mainChain.begin()) << std::endl;
        //     mainChain.insert(pos, insertVal);
        // }
    }
    // If the input size is odd, insert the last unpaired element
    if (container.size() % 2 != 0 && container.size() % 2 == pairs.size()) {
        int last = container.back();
        typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), last);
		mainChain.insert(pos, last);
        // if (pos == mainChain.end() || *pos != last) // this was checking for duplicates
        //     mainChain.insert(pos, last);
    }
    container = mainChain;
//    std::cout << "final container: ";
//    printSequence(container);

}

#endif