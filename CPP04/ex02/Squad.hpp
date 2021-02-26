/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:41:24 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/23 13:41:29 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include <iostream>
#include <string>
#include "ISquad.hpp"

typedef struct s_element
{
    ISpaceMarine        *marine;
    struct s_element    *next;
}               t_element;


class Squad : public ISquad
{

protected:
    t_element   *_element;
    int         _nbUnit;

public:
    Squad();
    Squad(const Squad &src);
    Squad &operator=(const Squad &rhs);
    virtual ~Squad();

    virtual int             getCount() const;
    virtual ISpaceMarine    *getUnit(int unit) const;
    virtual int             push(ISpaceMarine* marine);

    t_element               *add_link(ISpaceMarine* marine);
    void                    deleteSquad(void);
};


#endif

