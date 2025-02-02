/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:44:45 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/22 14:24:29 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

int main()
{
    Base *basePtr = generate();
	if (basePtr)
	{
		identify(basePtr);
		//identify(*basePtr);
		Base &baseRef = *basePtr;
		identify(baseRef);
		delete basePtr;
	}
	else 
		std::cout << "Error: Failed to generate Base object" << std::endl;
    return (0);
};