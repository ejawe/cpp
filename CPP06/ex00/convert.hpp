/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:12:59 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/10 15:17:36 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <string>
# include <climits>
# include <cmath>
# include <float.h>
# include <iomanip> 
# include <ctype.h>
# include <stdio.h> 
# include <string.h>

# define DISPLAYABLE 1
# define NOT_DISPLAYABLE 2
# define IMPOSSIBLE 0

bool	checkError(std::string str);
void	printSpecial(std::string str);
bool	specialValue(std::string str);
bool	checkChar(std::string str);
void	convertType(char* str);

#endif