/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:30:20 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/03 15:30:22 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

void    printContact(std::string name)
{
    unsigned sz = name.size();
    std::string str ("          ");

    if (sz > 10)
    {
        name.resize(9);
        std::cout << name << ".";
    }
    else
    {
        str.resize(10 - sz);
        std::cout << str;
        std::cout << name;
    }
    return;
}

void    displayContacts(Phonebook *contact, int id)
{
    int i;
    std::string contactIndex;
    i = 0;
    if (id == 0)
    {
        std::cout << "-----Your phone book is empty !" << std::endl;
        return;
    }
    std::cout << "|Index     |" << "Fisrt name|" << "Last name |" << "Nickname  |" << std::endl;
    std::cout << "|----------|" << "----------|" << "----------|" << "----------|" << std::endl;
    while (i < id)
    {
        std::cout << "|         " << i << "|";
        std::string first_name = contact[i].getFirstName();
        printContact(first_name);
        std::cout << "|";
        std::string last_name = contact[i].getLastName();
        printContact(last_name);
        std::cout << "|";
        std::string nick_name = contact[i].getNickName();
        printContact(nick_name);
        std::cout << "|" << std::endl;
        i++;
    }
    while(1)
    {
        std::cout << "----------------------------------" << std::endl;
        std::cout << "-----Enter the contact Index you want to see :" << std::endl;
        std::getline(std::cin, contactIndex);
        if (contactIndex.length() == 1 && contactIndex[0] >= '0' && contactIndex[0] <= '7')
        {
            if (contactIndex[0] - 48 >= id)
                std::cout << "-----Wrong Index ! Choose from existing contacts." << std::endl;
            else
            {
                contact[contactIndex[0] - 48].printContactIndex();
                return;
            }
        }
        else
            std::cout << "-----Wrong command !" << std::endl;
    }

}


int     main(void)
{
    int id = 0;
    std::string command;
    Phonebook   contact[8];

    std::cout << "Welcome !" << std::endl;
    while(1)
    {
        std::cout << "----------------------------------" << std::endl;
        std::cout << "-----To add a new contact enter [ADD]" << std::endl;
        std::cout << "-----To search a contact enter [SEARCH]" << std::endl;
        std::cout << "-----To exit enter [EXIT]" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
        {
            std::cout << "Bye !" << std::endl;
            return (0);
        }
        else if (command == "ADD")
        {
            if (id >= 8)
                std::cout << "-----The phone book is full-------" << std::endl;
            else
            {
                contact[id].createContact();
                id++;
            }
        }
        else if (command == "SEARCH")
            displayContacts(contact, id);
        else
            std::cout << "-----Wrong command !" << std::endl;
    }
    return (0);
}