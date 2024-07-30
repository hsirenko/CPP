#include <iostream>
#include <string>
#include <cctype>

int main()
{
	char c;

	std:: string Input;
	std::cin >> Input;
	if (Input.empty())
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		while (c : Input)
	{
		c = std:: toupper(c);

	}
	std::cout << c;

	}
	return 0;
}