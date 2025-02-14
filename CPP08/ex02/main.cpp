/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:42:01 by helensirenk       #+#    #+#             */
/*   Updated: 2025/02/14 18:16:33 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "==== MutantStack 🧬🔬👽🦠 ====" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "==== List  ✅📋📝📌 ====" << std::endl;

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
   
    lst.push_back(0);

    for (std::list<int>::iterator lit = lst.begin(); lit != lst.end(); lit++)
    {
        std::cout << *lit << std::endl;
    }

    std::cout << "==== Vector 🔄🔀🎯📊 ====" << std::endl;

    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(17);
    std::cout << vec.back() << std::endl;
    vec.pop_back();
    std::cout << vec.size() << std::endl;
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(737);
    
    vec.push_back(0);

        for (std::vector<int>::iterator vit = vec.begin(); vit != vec.end(); vit++)
    {
        std::cout << *vit << std::endl;
    }

    return 0;
}