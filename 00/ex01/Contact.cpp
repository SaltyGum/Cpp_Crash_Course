/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:08:49 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/05/25 14:40:50 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstName() const
{
	return this->firstName;
}

std::string Contact::getLastName() const
{
	return this->lastName;
}

std::string Contact::getNickName() const
{
	return this->nickName;
}

std::string Contact::getPhoneNumber() const
{
	return this->phoneNumber;
}

std::string Contact::getSecret() const
{
	return this->secret;
}

void Contact::setFirstName(std::string name)
{
	this->firstName = name;
	return;
}

void Contact::setLastName(std::string name)
{
	this->lastName = name;
	return;
}

void Contact::setNickName(std::string name)
{
	this->nickName = name;
	return;
}

void Contact::setPhoneNumber(std::string number)
{
	this->phoneNumber = number;
	return;
}

void Contact::setSecret(std::string secret)
{
	this->secret = secret;
	return;
}
