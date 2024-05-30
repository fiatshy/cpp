#include "PhoneBook.hpp"

#include <algorithm>
#include <cctype>
#include <iostream>

std::string	strToUpper(std::string &str)
{
	for (char &c : str){
		c = std::toupper(c);
	}
	return (str);
}

int	checkIfDigit(std::string &str)
{
	for (char &c : str)
	{
		if ('0' > c || c > '9')
			return (0);
	}
	return (1);
}

int main(void)
{
	Contact 	contact;
	PhoneBook 	pb;
	std::string	userInput;

	while (strToUpper(userInput).compare("EXIT"))
	{
		std::cout << "Please Enter a command : (example: add, search, exit)" << std::endl;
		getline(std::cin, userInput);
		if (!strToUpper(userInput).compare("ADD"))
		{
			do {
				std::cout << "First name : ";
				getline(std::cin, userInput);
				contact.setFirstName(userInput);
			} while (contact.getFirstName().empty());
			do {
				std::cout << "Last name : ";
				getline(std::cin, userInput);
				contact.setLastName(userInput);
			} while (contact.getLastName().empty());
			do {
				std::cout << "Nickname : ";
				getline(std::cin, userInput);
				contact.setNickName(userInput);
			} while (contact.getNickName().empty());
			do {
				std::cout << "Darkest Secret : ";
				getline(std::cin, userInput);
				contact.setDarkestSecret(userInput);
			} while (contact.getDarkestSecret().empty());
			do {
				std::cout << "Phone Number : ";
				getline(std::cin, userInput);
				if (checkIfDigit(userInput) == 1)
				{
					contact.setPhoneNumber(userInput);
				}
				else
				{
					std::cout << "Only digit is allowed for Phone number." << std::endl;
					userInput.clear();
				}
			} while (contact.getPhoneNumber().empty());

			pb.add(contact);
		}
		else if (!strToUpper(userInput).compare("SEARCH"))
		{
			pb.printPhoneBook();
			if (pb.getLengthOfContact() > 1)
			{
				do {
					std:: cout << "Select a index on the list : " << std::endl;
					getline(std::cin, userInput);
					if (0 <= atoi(userInput.c_str()) &&  atoi(userInput.c_str()) <= 7)
					{
						if (pb.search(atoi(userInput.c_str())) == -1)
							userInput.clear();
					}
					else
					{
						std::cout << "You must enter digit between 0-7" << std::endl;
						userInput.clear();
					}
				} while (userInput.empty());
			}
			else
			{
				std::cout << "No contact is on the list." << std::endl;
				std::cout << "please add contacts by using command ADD" << std::endl << std::endl;
			}
		}
		else if (strToUpper(userInput).compare("EXIT"))
		{
			std::cout << "Wrong command." << std::endl << std::endl;
		}
	}
}