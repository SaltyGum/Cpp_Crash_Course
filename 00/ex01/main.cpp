/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:47:39 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/05/25 19:29:48 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

void	updateContact(Phonebook *phonebook)
{
	Contact		contact;
	std::string	tmp;

	std::cout << "First Name: ";
	std::getline(std::cin, tmp);
	contact.setFirstName(tmp);

	std::cout << "Last Name: ";
	std::getline(std::cin, tmp);
	contact.setLastName(tmp);

	std::cout << "Nickname: ";
	std::getline(std::cin, tmp);
	contact.setNickName(tmp);

	std::cout << "PhoneNumber: ";
	std::getline(std::cin, tmp);
	contact.setPhoneNumber(tmp);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, tmp);
	contact.setSecret(tmp);

	phonebook->setContact(contact);
}

std::string trunc(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	contactSearch(Phonebook *phonebook)
{
	int	index, count, i;

	i = 0;
	count = phonebook->getCount();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	while (i < phonebook->getCount())
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << trunc(contact.getFirstName());
		std::cout << "|" << std::setw(10) << trunc(contact.getLastName());
		std::cout << "|" << std::setw(10) << trunc(contact.getNickName()) << "|" << std::endl;
		i++;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	if (count > 0)
	{
		std::cout << "Please insert a valid index to show more info: ";
		while (!(std::cin >> index ) || index > count || index < 1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input." << std::endl;
			std::cout << "Please insert a valid index to show more info: ";
		}
		index--;
		Contact tmp;
		tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name - " << tmp.getFirstName() << std::endl;
		std::cout << "Last name - " << tmp.getLastName() << std::endl;
		std::cout << "Nickname - " << tmp.getNickName() << std::endl;
		std::cout << "Phone number - " << tmp.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret - " << tmp.getSecret() << std::endl;
	}
	else
	{
		std::cout << "Table is empty!" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main(void)
{
	Phonebook phonebook;
	std::string option;

	std::cout << "Commands available ADD EXIT SEARCH!!" << std::endl;
	std::cout << "ADD: Add a new contact to the phonebook. Max 8." << std::endl;
	std::cout << "SEARCH: Searches for a contact in the phonebook" << std::endl;
	std::cout << "EXIT: Exit the program." << std::endl;
	while (42)
	{
		std::cout << std::endl << "Enter a Command: ";
		std::getline(std::cin, option);
		if (option == "ADD")
		{
			updateContact(&phonebook);
		}
		else if (option == "SEARCH")
		{
			contactSearch(&phonebook);
		}
		else if (option == "EXIT")
		{
			break ;
		}
		else
			std::cout << "Not a valid option try another command!";
	}
	return 0;
}
