/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:26:08 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/08 18:25:31 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong numbers of arguments!" << std::endl;
        return (1);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1 == "" || s2 == "")
    {
        std::cerr << "Error: invalid argument." << std::endl;
        return (1);
    }
    //inut
    std::string fileIn = argv[1];
    std::ifstream ifs(fileIn);
    if (!ifs)
    {
        std::cerr << "Error: wrong file." << std::endl;
        return (1);
    }
    //output
    std::string extention = ".replace";
    std::string fileOut = argv[1] + extention;
    std::ofstream ofs(fileOut);
    if (!ofs)
    {
        std::cerr << "Error: wrong file." << std::endl;
        return (1);
    }
    std::string line;
    int found;
    while (std::getline(ifs, line))
    {
        found = -1;
        do
        {
            found = line.find(s1, found + 1);
            if (found != -1)
                line.replace(found, s1.size(), s2);
        } while (found != -1);
        ofs << line;
        if (!ifs.eof())
            ofs << '\n';
    }
    return (0);
}