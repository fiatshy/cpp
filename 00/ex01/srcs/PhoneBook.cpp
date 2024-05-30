#include "PhoneBook.hpp"

#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::add(Contact contact)
{
	int	count = 0;

	this->_index++;
	if (this->_index > MAX)
	{
		for (count = 0; count < MAX - 1; count++)
		{
			this->_contact[count] = this->_contact[count + 1];
		}
		this->_contact[MAX - 1] = contact;
		this->_index--;
	}

	while (count < MAX)
	{
		if (this->_contact[count].getFirstName() == "")
		{
			this->_contact[count] = contact;
			break;
		}
		count++;
	}
	std::cout << std::endl << "Contact is succesfully added\n" << std::endl;
	return ;
}

int PhoneBook::search(int index)
{
	if (index > MAX || index < 0)
	{
		std::cout << "Invalid Index" << std::endl;
		return (-1);
	}
	else if (this->_contact[index].getFirstName() == "" )
	{
		std::cout << "No contact saved in this index." << std::endl;
		return (-1);
	}
	else
	{
		printContact(index);
		return (0);
	}
	return (0);
}

void	PhoneBook::printContact(int index)
{
	std::cout << "=" << index << "=" << std::endl
			<< "First name : " << this->_contact[index].getFirstName() << std::endl
			<< "Last name : " << this->_contact[index].getLastName() << std::endl
			<< "Nickname : " << this->_contact[index].getNickName() << std::endl
			<< "Darkest secret : " << this->_contact[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::printPhoneBook(void)
{
	int	index = 0;
	std::cout << std::endl << "=== List of PhoneBook ===" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << "Index"
				<< "|" << std::right << std::setw(10) << "First name"
				<< "|" << std::right << std::setw(10) << "Last name"
				<< "|" << std::right << std::setw(10) << "Nickname"
				<< "|" << std::endl;
	for (index = 0; index < MAX; index++)
	{
		if (this->_contact[index].getFirstName() != "")
		{
			std::cout << "|" << std::right << std::setw(10) << index
				<< "|" << std::right << std::setw(10) << this->adjustLength(this->_contact[index].getFirstName())
				<< "|" << std::right << std::setw(10) << this->adjustLength(this->_contact[index].getFirstName())
				<< "|" << std::right << std::setw(10) << this->adjustLength(this->_contact[index].getFirstName())
				<< "|" << std::endl;
		}
	}
	std::cout << std::endl;
}

std::string	PhoneBook::adjustLength(std::string str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	else
	{
		return (std::string(10 - str.length(), ' ') + str);
	}
}

int	PhoneBook::getLengthOfContact(void)
{
	int	index;

	index = 0;
	while (this->_contact[index++].getFirstName() != "")
		;
	return (index);
}