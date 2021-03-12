/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:46:19 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 10:46:20 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

class Base
{

public:
	virtual ~Base(){};

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif