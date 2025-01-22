/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:35:56 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/02 16:41:14 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void stringReplace(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inFile;
    inFile.open(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: could not open file " << filename << "\n" << std::endl;
        return ;
    }

	if (inFile.peek() == EOF)
	{
		std::cerr << "Error: file cannot be empty\n" << std::endl;
		inFile.close();
		return ;
	}

    std::string outFileName = filename + ".replace";
    std::ofstream outFile(outFileName.c_str()); // creates output file
     if (!outFile.is_open())
    {
        std::cerr << "Error: could not create file " << outFileName << "\n" << std::endl;
        return ;
    }

    std::string line;
	bool found = false;
    while (std::getline(inFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) // (-1)
        {
			found = true;
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outFile << line << "\n";
    }

	inFile.close();
    outFile.close();

	if (!found)
	{
		std::cerr << "Error: string " << s1 << " not found in file " << filename << "\n" << std::endl;
		std::remove(outFileName.c_str());
		return ;
	} 

    std::cout << "File " << filename << " has been replaced with " << s2 << " instead of " << s1 << " in " << outFileName << "\n" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (s1.empty())
        {
            std::cerr << "Error: string1 to replace string2 cannot be empty\n"
                    << std::endl;
            return 1;
        }
        stringReplace(filename, s1, s2);
        return (0);
    }
    else
    {
        std::cerr << "Error: the input must be: <filename>, <string1>, <string2>\n" << std::endl;
        return (1);
    }
    return (0);
}