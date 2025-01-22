/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:22:41 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/22 18:55:45 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

// int main( void ) 
// {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// std::cout << "---------------------" << std::endl;
// int e = 3;
// int f = 3;
// ::swap( e, f );
// std::cout << "e = " << e << ", f = " << f << std::endl;
// std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
// std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
// return 0;
// }

int main( void ) 
{
	int a = 2;
	int b = 3;
	Functions<int>::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << Functions<int>::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << Functions<int>::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	Functions<std::string>::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << Functions<std::string>::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << Functions<std::string>::max( c, d ) << std::endl;

	std::cout << "---------------------" << std::endl;
	int e = 3;
	int f = 3;
	Functions<int>::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << Functions<int>::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << Functions<int>::max( e, f ) << std::endl;
	return 0;
}