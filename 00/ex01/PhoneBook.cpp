#include "PhoneBook.hpp"

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
			this->_contacts[count] = this->contacts[count + 1]
		}
		this->_contacts[MAX - 1] = contact;
		this->_index--;
	}

	while (count < MAX)
	{
		if (this->_contacts[count].getFirstName() == ""
		{
			this->_contacts[count] = contact;
			break;
		})
		count++;
	}
	return ;
}

void PhoneBook::search(int index)
{
	if (index > MAX || index < 0)
		std::cout << "Invalid Index" << std::endl;
	else if (this->_contacts[index].getFirstName() == "" )
		std::cout << "No contact saved in this index." << std::endl;
	else
	{
		printContact(index);
	}
}

void	PhoneBook::printContact(int index)
{
	std::cout << index << " : "	
			<<
}