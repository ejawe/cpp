/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:41:33 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/23 13:41:34 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _element(NULL), _nbUnit(0)
{

}

Squad::Squad(const Squad &src)
{
    *this = src;
    return;
}

Squad &      Squad::operator=(const Squad &rhs)
{
    if(this != &rhs)
    {
        this->deleteSquad();
        int i = 0;
        while (i < rhs.getCount())
        {
            this->push(rhs.getUnit(i)->clone());
            i++;
        }
    }
    return *this;
}

Squad::~Squad()
{
    this->deleteSquad();
    return;
}

void        Squad::deleteSquad(void)
{
    if (!this->_element)
        return;
    t_element *tmp_element = this->_element;
    t_element *tmp_element_next;

    while(tmp_element)
    {
        tmp_element_next = tmp_element->next;
        delete tmp_element->marine;
        delete tmp_element;
        tmp_element = tmp_element_next;
    }
    this->_element = NULL;
    this->_nbUnit = 0;
    return;
}

t_element   *Squad::add_link(ISpaceMarine* marine)
{
    t_element *tmp;

    tmp = new t_element;
    if (!tmp)
        return (NULL);
    else
    {
        tmp->marine = marine;
        tmp->next = NULL;
        this->_nbUnit++;
    }
    return tmp;
}

int     Squad::push(ISpaceMarine* marine)
{
	if (!marine)
		return (this->_nbUnit);
	if (!this->_element)
		this->_element = this->add_link(marine);
	else if (this->_element->marine != marine)
	{
		t_element *tmpsquad = this->_element;
		while (tmpsquad->next)
		{
			if (tmpsquad->next->marine == marine)
				return (this->_nbUnit);
			tmpsquad = tmpsquad->next;
		}
		tmpsquad->next = this->add_link(marine);
	}
	return (this->_nbUnit);
}

ISpaceMarine   *Squad::getUnit(int unit) const
{
    t_element *tmp_element = this->_element;
    int nb = 0;
    if (tmp_element == NULL || unit < 0 || unit > this->_nbUnit)
        return NULL;
    
    while(tmp_element)
    {
        if (nb == unit)
            return tmp_element->marine;
        tmp_element = tmp_element->next;
        nb++;
    }
    return NULL;
}

int     Squad::getCount() const
{
    return this->_nbUnit;
}


