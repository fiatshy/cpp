#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setNickName(std::string str);
		void		setPhoneNumber(std::string str);
		void		setDarkestSecret(std::string str);
		std::string	getFirstName(std::string str);
		std::string	getLastName(std::string str);
		std::string	getNickName(std::string str);
		std::string	getPhoneNumber(std::string str);
		std::string	getDarkestSecret(std::string str);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string _phoneNumber;
		std::string	_darkestSecret;
};

#endif