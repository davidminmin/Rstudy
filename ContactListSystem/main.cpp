#include "ContactListSystem.h"


int main()
{
	ContactList contactList;
	contactList.contactNum = 0; // Initialize contact number to 0
	
	ShowMenu();
	int option = 0;
	while (option != 6) // Loop until the user chooses to exit
	{	
		CinMenu(&option, contactList);
		option = 0;
		ShowMenu(); // Show the menu again after processing the option
	}

	return 0;
}