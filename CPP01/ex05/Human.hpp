/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:15:44 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/07 17:15:45 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{

private:

    Brain const _brain;

public:

    Human();
    ~Human();
    Brain const     &getBrain() const;
    std::string     identify() const;

};

#endif