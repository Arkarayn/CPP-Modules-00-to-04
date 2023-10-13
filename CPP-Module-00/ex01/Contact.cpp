#include "Phonebook.hpp"

bool Contact::containsLetters(std::string &str)
{
	for (int i = 0; i < str.length(); i++)
		if (isalpha(str[i]))
			return (true);
}

bool Contact::containsNumbers(std::string &str)
{
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]))
			return (true);
}

void Contact::truncate(std::string &str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
}

void Contact::setFirstName()
{
	do
	{
		std::cout << "First name: ";
		std::getline(std::cin, firstName);
	}
	while (firstName.empty() || containsNumbers(firstName) || !containsLetters(firstName));
	truncate(firstName);
}

void Contact::setLastName()
{
	do
	{
		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
	}
	while (lastName.empty() || containsNumbers(lastName) || !containsLetters(lastName));
	truncate(lastName);
}

void Contact::setNickname()
{
	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);
	}
	while (nickname.empty() || !containsLetters(nickname));
	truncate(nickname);
}

void Contact::setPhoneNumber()
{
	do
	{
		std::cout << "Phone number (No Prefix): ";
		std::getline(std::cin, phoneNumber);
	}
	while (phoneNumber.empty() || containsLetters(phoneNumber));
	truncate(phoneNumber);
}

void Contact::setDarkestSecret()
{
	do
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkestSecret);
	}
	while (darkestSecret.empty());
	truncate(darkestSecret);
}

void Contact::printContact()
{
	system("clear");
	std::cout << "\033[1;3;34mYour Personal PhoneBook\n\033[0m" << std::endl;
	std::cout << "\033[32mFirst name: \033[0m" << firstName << std::endl;
	std::cout << "\033[32mLast name: \033[0m" << lastName << std::endl;
	std::cout << "\033[33mNickname: \033[0m" << nickname << std::endl;
	std::cout << "\033[32mPhone number: \033[0m" << phoneNumber << std::endl;
	std::cout << "\033[31mDarkest secret: \033[0m" << darkestSecret << std::endl;
	std::cout << "\n\033[1;3;34mPress something to continue...\033[0m";
	std::cin.get();
}