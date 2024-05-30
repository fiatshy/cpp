# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getDarkestSecret(void);
        std::string getPhoneNumber(void);
        void        setFirstName(std::string str);
        void        setLastName(std::string str);
        void        setNickName(std::string str);
        void        setDarkestSecret(std::string str);
        void        setPhoneNumber(std::string str);

    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _darkestSecret;
        std::string _phoneNumber;

};

# endif