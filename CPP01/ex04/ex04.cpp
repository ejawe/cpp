/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:25:13 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/09 16:25:14 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str("HI THIS IS BRAIN");

    std::string *ptrStr = &str;
    std::string &refStr = str;

    std::cout << "ptrStr : " << *ptrStr << std::endl;
    std::cout << "refStr : " << refStr << std::endl;

    return (0);
}