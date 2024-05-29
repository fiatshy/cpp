#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX	8

#include "Contact.hpp"

class PhoneBook
{	
public:
	PhoneBook();
	~PhoneBook();
	void	add(Contact contact);
	void	search(int index);
	void	printContact(int index);
	void	printPhotoBook(void);
private:
	Contact _contact[MAX];
	int		_index;
};

#endif