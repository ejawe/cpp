/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:30:29 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/03 15:30:30 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

void    Phonebook::createContact(void)
{
    std::cout << "-----Your first name ?" << std::endl;
    getline(std::cin, this->_first_name);
    std::cout << "-----Your last name ?" << std::endl;
    getline(std::cin, this->_last_name);
    std::cout << "-----Your nickname ?" << std::endl;
    getline(std::cin, this->_nickname);
    std::cout << "-----Your login ?" << std::endl;
    getline(std::cin, this->_login);
    std::cout << "-----Your postal address ?" << std::endl;
    getline(std::cin, this->_postal_address);
    std::cout << "-----Your email address ?" << std::endl;
    getline(std::cin, this->_email_address);
    std::cout << "-----Your phone number ?" << std::endl;
    getline(std::cin, this->_phone_number);
    std::cout << "-----Your birthday date ?" << std::endl;
    getline(std::cin, this->_birthday_date);
    std::cout << "-----Your favorite meal ?" << std::endl;
    getline(std::cin, this->_favorite_meal);
    std::cout << "-----Your underwear color ?" << std::endl;
    getline(std::cin, this->_underwear_color);
    std::cout << "-----Your darkest secret ?" << std::endl;
    getline(std::cin, this->_darkest_secret);
    std::cout << "-----The contact " << this->_first_name << " is created !" << std::endl;
    return ;
}

std::string    Phonebook::getFirstName(void) const {

    return this->_first_name;
}

std::string    Phonebook::getLastName(void) const {

    return this->_last_name;
}

std::string    Phonebook::getNickName(void) const {

    return this->_nickname;
}

void    Phonebook::printContactIndex(void)
{
    std::cout << "-----First name     : " << this->_first_name << std::endl;
    std::cout << "-----Last name      : " << this->_last_name << std::endl;
    std::cout << "-----Nickname       : " << this->_nickname << std::endl;
    std::cout << "-----Login          : " << this->_login << std::endl;
    std::cout << "-----Postal address : " << this->_postal_address << std::endl;
    std::cout << "-----Email address  : " << this->_email_address << std::endl;
    std::cout << "-----Phone number   : " << this->_phone_number << std::endl;
    std::cout << "-----Birthday date  : " << this->_birthday_date << std::endl;
    std::cout << "-----Favorite meal  : " << this->_favorite_meal << std::endl;
    std::cout << "-----Underwear color: " << this->_underwear_color << std::endl;
    std::cout << "-----Darkest secret : " << this->_darkest_secret << std::endl;
    return ;
}