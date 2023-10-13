#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

class Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    public:
        bool containsLetters(std::string &str);
        bool containsNumbers(std::string &str);
        void truncate(std::string &str);
        void setFirstName();
        void setLastName();
        void setNickname();
        void setPhoneNumber();
        void setDarkestSecret();
        std::string getFirstName() { return firstName; }
        std::string getLastName() { return lastName; }
        std::string getNickname() { return nickname; }
        void printContact();
};

class PhoneBook
{
    Contact contacts[8];
    int nContacts;
    int index = 0;
    public:
        void addContact();
        void searchContact();
};

#endif