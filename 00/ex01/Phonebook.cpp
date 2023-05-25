/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:10:00 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/05/25 14:40:07 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : index(0)
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

Contact Phonebook::getContact(int index) const
{
	return this->contact[index];
}

int	Phonebook::getCount() const
{
	return this->count;
}

void Phonebook::setContact(Contact contact)
{
	this->contact[this->index] = contact;
	count = (count < 8) ? count + 1 : count;
	this->index = (this->index + 1) % 8;
	return;
}

int Phonebook::count = 0;
