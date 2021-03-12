/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:27:14 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 09:54:09 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
#include <string.h>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	srand(time(NULL));
	char *raw = new char[20];
	char str[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	while (i < 8)
	{
		raw[i] = str[rand() % (sizeof(str) - 1)];
		i++;
	}
	*(reinterpret_cast<int*>(raw + 8)) = rand() % 100;
	i = 12;
	while (i < 20)
	{
		raw[i] = str[rand() % (sizeof(str) - 1)];
		i++;
	}
	raw[20] = '\0';
	return raw;
}

Data	*deserialize(void *raw)
{
	Data *data = new Data;
	char *str = reinterpret_cast<char *>(raw);

	data->s1 = std::string(str, 8);
	data->n = *reinterpret_cast<int*>(str + 8);
	data->s2 = std::string(str + 12, 8);
	return data;
}

int		main(void)
{
	char *str = reinterpret_cast<char*>(serialize());
	std::cout << "-----------------------------Serialize" << std::endl;
	int i = 0;
	while (i < 8)
	{
		std::cout << *(reinterpret_cast<char*>(str + i));
		i++;
	}
	std::cout << std::endl;
	std::cout << *(reinterpret_cast<int*>(str + 8)) << std::endl;
	i = 12;
	while (i < 20)
	{
		std::cout << *(reinterpret_cast<char*>(str + i));
		i++;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------Deserialize" << std::endl;
	Data *d = deserialize(str);
    std::cout << d->s1 << std::endl;
    std::cout << d->n << std::endl;
    std::cout << d->s2 << std::endl;

	delete d;
	delete[] str;
	return 0;
}