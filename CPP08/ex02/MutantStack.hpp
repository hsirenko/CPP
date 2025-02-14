/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:38:23 by helensirenk       #+#    #+#             */
/*   Updated: 2025/02/14 18:43:56 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack> 
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        MutantStack() {};
        MutantStack(MutantStack const &src) : std::stack<T>(src) {};
        MutantStack &opoerator(MutantStack const &src)
        {
            if (*this != src)
            {
                this->c = src.c;
            }
            return *this;
        };
        
        ~MutantStack()
        {
            this->c.clear();
        }

        typedef typename std::stack<T>::container_type::iterator iterator; //LIFO -> last-in, first_out :: container type -> protected member type of std::stack<T> (underlying container)
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin() { return this->c.begin(); }

        iterator end() { return this->c.end(); }
        
        const_iterator begin() const { return this->c.begin(); }

        const_iterator end() const { return this->c.end(); }
        
        reverse_iterator rbegin() { return this->c.begin(); }
        
        reverse_iterator rend() { return this->c.rend(); }

        const_reverse_iterator rbegin() const { return this->c.rbegin(); }

        const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif


//std::stack<int>::container_type c;  // Equivalent to std::deque<int> c; or list or vector 

//typedef defines a new type alias named iterator.
//typename is required because container_type::iterator is a dependent type (it depends on T)
