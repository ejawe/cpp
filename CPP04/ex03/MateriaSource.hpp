/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:33 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:34 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef METERIA_SOURCE_H
# define METERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria	*_materia[4];
	int			_index;

public:
	MateriaSource();
	virtual ~MateriaSource();
    MateriaSource(const MateriaSource &src);
    MateriaSource &operator=(const MateriaSource &rhs);

	virtual void 		learnMateria(AMateria* src);
	virtual AMateria* 	createMateria(std::string const & type);
	void				deleteMateriaSource();
};

#endif