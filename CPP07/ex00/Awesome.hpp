/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:35:23 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 14:35:24 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome {

public:
	Awesome( int n ) : _n( n ) {}
	
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

	int get_n() { return _n; }

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome &rhs) {
	o << rhs.get_n();
	return (o);
}

#endif