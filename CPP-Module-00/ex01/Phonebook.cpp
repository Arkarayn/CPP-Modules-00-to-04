#include "Phonebook.hpp"

void PhoneBook::addContact()
{
	system("clear");
	std::cout << "\033[1;3;34mYour Personal PhoneBook\n\033[0m" << std::endl;
	if(nContacts == 8 && index == 8)
		index = 0;
	contacts[index].setFirstName();
	contacts[index].setLastName();
	contacts[index].setNickname();
	contacts[index].setPhoneNumber();
	contacts[index].setDarkestSecret();
	if(nContacts < 8)
		nContacts++;
	index++;
}

void PhoneBook::searchContact()
{
	system("clear");
	std::cout << "\033[1;3;34mYour Personal PhoneBook\n\033[0m" << std::endl;
	if(nContacts == 0)
	{
		system("clear");
		std::cout << "\033[1;3;31mNo contacts in your phonebook\033[0m" << std::endl;
		std::cout << "\n\033[1;3;34mPress something to continue...\033[0m";
		std::cin.get();
		return;
	}
	std::cout << std::setw(10) << "\033[1;36m     Index\033[0m" << " \033[33m|\033[0m ";
	std::cout << std::setw(10) << "\033[1;36mFirst Name\033[0m" << " \033[33m|\033[0m ";
	std::cout << std::setw(10) << "\033[1;36mLast Name \033[0m" << " \033[33m|\033[0m ";
	std::cout << std::setw(10) << "\033[1;36mNickname\033[0m" << std::endl;
	for (int i = 0; i < nContacts; i++)
	{
		std::cout << "\033[33m---------------------------------------------------\033[0m" << std::endl;
		std::cout << std::setw(10) << i + 1 << " \033[33m|\033[0m ";
		std::cout << std::setw(10) << contacts[i].getFirstName() << " \033[33m|\033[0m ";
		std::cout << std::setw(10) << contacts[i].getLastName() << " \033[33m|\033[0m ";
		std::cout << std::setw(10) << contacts[i].getNickname() << std::endl;
	}
	std::cout << "\n\033[1;3;34mEnter index: \033[0m";
	std::string index;
	std::getline(std::cin, index);
	if (index.length() != 1 || index[0] < '1' || index[0] > '8' || index[0] - '0' > nContacts)
	{
		system("clear");
		std::cout << "\033[1;3;31mInvalid index" << std::endl;
		std::cout << "\n\033[1;3;34mPress something to continue...\033[0m";
		std::cin.get();
		return;
	}
	int i = index[0] - '1';
	contacts[i].printContact();
}