#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
public:
	Contact();
	~Contact();

	//Getters
	
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getSecret() const;

	//Setters
	
	void	setFirstName(std::string name);
	void	setLastName(std::string name);
	void	setNickName(std::string name);
	void	setPhoneNumber(std::string number);
	void	setSecret(std::string secret);

private:

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string secret;
};

#endif
