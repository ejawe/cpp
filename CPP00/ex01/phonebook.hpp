/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:30:38 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/03 15:30:39 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Phonebook {

public:

    void            createContact(void);
	void			printContactIndex(void);
    std::string     getFirstName(void) const;
    std::string     getLastName(void) const;
    std::string     getNickName(void) const;

private:

	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
    std::string		_postal_address;
    std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

};

#endif