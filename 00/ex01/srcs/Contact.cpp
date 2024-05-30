#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::setFirstName(std::string str)
{
	_firstName = str;
}

void	Contact::setLastName(std::string str)
{
	_lastName = str;
}

void	Contact::setNickName(std::string str)
{
	_nickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

std::string	Contact::getNickName(void)
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}
