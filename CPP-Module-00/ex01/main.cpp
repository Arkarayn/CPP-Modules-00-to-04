#include "Phonebook.hpp"

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while(1)
	{
		system("clear");
		std::cout << "\033[1;3;33mYour Personal PhoneBook (max. 8 Contacts)\n\033[0m" << std::endl;
		std::cout << "\033[36mHere's the possible inputs:\n\033[0m"
				  << "\033[1;30m-ADD         \n"
				  << "-SEARCH      \n"
				  << "-EXIT        \n\033[0m" << std::endl;
		std::cout << "\033[1;3;34mEnter command: \033[0m";
		std::getline(std::cin, command);
		if(std::cin.eof())
			break;
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break;
	}
}