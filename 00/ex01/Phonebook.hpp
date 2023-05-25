/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:19:58 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/05/25 14:39:41 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H

# define PHONEBOOK_H
# include "Contact.hpp"

class Phonebook
{
public:

	// Constructors && Destroyers

	Phonebook();
	~Phonebook();

	//Getters
	
	Contact getContact(int index) const;
	int		getCount() const;

	//Setters
	
	void	setContact(Contact contact);

private:

	static int	count;
	Contact		contact[8];
	int			index;
};

#endif
