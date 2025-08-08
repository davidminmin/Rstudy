#include "ContactListSystem.h"

void ShowMenu()
{
    cout << "***********************" << std::endl;
	cout << "1. Add contact" << std::endl;
	cout << "2. Delete contact" << std::endl;
	cout << "3. Edit contact" << std::endl;
	cout << "4. Show all contacts" << std::endl;
	cout << "5. Search contact" << std::endl;
	cout << "6. Exit" << std::endl;
    cout << "***********************" << std::endl;
}

void CinMenu(int * option, ContactList &contactList)
{
	cout << "Please choose an option (1-6): ";
	cin >> *option;
	switch (*option)
	{
	case 1:
		/* code */
		cout << "Adding a new contact..." << std::endl;
		AddContact(contactList);
		break;
	case 2:
		/* code */
		cout << "Deleting a contact..." << std::endl;
		DeleteContact(contactList);
		break;
	case 3:
		/* code */	
		cout << "Editing a contact..." << std::endl;
		EidtContact(contactList);
		break;
	case 4:
		/* code */
		cout << "Showing all contacts..." << std::endl;
		ShowContact(contactList);
		break;
	case 5:
		/* code */
		cout << "Searching for a contact..." << std::endl;
		SearchContact(contactList);
		break;
	case 6:
		cout << "Exiting the contact list system." << std::endl;
		exit(0);
		break;
	default:
		cout << endl;
		cout << "Invalid option. Please try again." << std::endl;
		cout << endl;
		*option = 0; // Reset option to allow re-entry
		break;
	}
}

void AddContact(ContactList &contactList)
{ 
	if(contactList.contactNum < MAX_CONTACT_NUM)
	{
		cout << "Enter name: ";
		cin >> contactList.contacts[contactList.contactNum].name;
		cout << "Enter age: ";
		cin >> contactList.contacts[contactList.contactNum].age;
		cout << "Enter phone number: ";
		cin >> contactList.contacts[contactList.contactNum].phone;
		cout << "Enter email: ";
		cin >> contactList.contacts[contactList.contactNum].email;
		cout << "Enter address: ";
		cin >> contactList.contacts[contactList.contactNum].address;
		contactList.contactNum++;
		cout << endl;
		cout << "Current Contactlist number is " <<contactList.contactNum<< std::endl;
		cout << "Contact added successfully!" << std::endl;
		cout << endl;
	}
	else
	{
		cout << "Contact list is full. Cannot add more contacts." << std::endl;
	}
}

void ShowContact(ContactList &contactList)
{ 
	if (contactList.contactNum > 0)
	{
		cout << "Contact list:" << std::endl;
		for (int i = 0; i < contactList.contactNum; i++)
		{
			cout << endl;
			cout << "Contact " << i + 1 << ":" << std::endl;
			cout << "Name: " << contactList.contacts[i].name << std::endl;
			cout << "Age: " << contactList.contacts[i].age << std::endl;
			cout << "Phone: " << contactList.contacts[i].phone << std::endl;
			cout << "Email: " << contactList.contacts[i].email << std::endl;
			cout << "Address: " << contactList.contacts[i].address << std::endl;
			cout << endl;
		}
	}
	else
	{
		cout << endl;
		cout << "No contacts available." << std::endl;
		cout << endl;
	}
}

void DeleteContact(ContactList &contactList)	
{
	if (contactList.contactNum > 0)
	{
		cout << "Enter the name of the contact you want to delete: ";
		string name;
		cin >> name;
		for (size_t i = 0; i < contactList.contactNum; i++)
		{
			if (contactList.contacts[i].name == name)
			{
				// Shift contacts to fill the gap
				for (size_t j = i; j < contactList.contactNum - 1; j++)
				{
					contactList.contacts[j] = contactList.contacts[j + 1];
				}
				contactList.contactNum--;
				cout << endl;
				cout << "Current Contactlist number is " <<contactList.contactNum<< std::endl;
				cout << "Contact deleted successfully." << std::endl;
				cout << endl;
			}
			else
			{
				cout << endl;
				cout << "Contact not found." << std::endl;
				cout << endl;
			}
		}
	} 
	else
	{
		cout << endl;
		cout << "No contacts available to delete." << std::endl;
		cout << endl;
	}
}

void SearchContact(ContactList &contactList)
{ 
	if (contactList.contactNum > 0)
	{
		cout << "Enter the name of the contact you want to search: ";
		string searchName;
		cin >> searchName;

		for (int i = 0; i < contactList.contactNum; i++)
		{
			if (contactList.contacts[i].name == searchName)
			{
				cout << endl;
				cout << "Contact found:" << std::endl;
				cout << "Name: " << contactList.contacts[i].name << std::endl;	
				cout << "Age: " << contactList.contacts[i].age << std::endl;
				cout << "Phone: " << contactList.contacts[i].phone << std::endl;
				cout << "Email: " << contactList.contacts[i].email << std::endl;
				cout << "Address: " << contactList.contacts[i].address << std::endl;
				cout << endl;
			}
			else {
				cout << endl;
				cout << "Contact not found" << std::endl;
				cout << endl;
			}
		}
	}
	else {
		cout << endl;
		cout << "Contact list is empty" << std::endl;
		cout << endl;
	}
}

void EidtContact(ContactList &contactList)
{
	if (contactList.contactNum > 0) {
		cout << endl;
		cout << "Enter the name of the contact you want to edit: ";
		string name;
		cin >> name;
		for (int i = 0; i < contactList.contactNum; i++) {
			if (contactList.contacts[i].name == name) {
				cout << "Editing contact: " << contactList.contacts[i].name << std::endl;
				cout << "Enter new name (or press enter to keep current): ";
				string newName;
				cin.ignore(); // Clear the input buffer
				getline(cin, newName);
				if (!newName.empty()) {
					contactList.contacts[i].name = newName;
				}
				cout << "Enter new age (or press enter to keep current): ";
				string ageInput;
				getline(cin, ageInput);
				if (!ageInput.empty()) {
					contactList.contacts[i].age = stoi(ageInput);
				}
				cout << "Enter new phone number (or press enter to keep current): ";
				string newPhone;
				getline(cin, newPhone);
				if (!newPhone.empty()) {
					contactList.contacts[i].phone = newPhone;
				}
				cout << "Enter new email (or press enter to keep current): ";
				string newEmail;
				getline(cin, newEmail);
				if (!newEmail.empty()) {
					contactList.contacts[i].email = newEmail;
				}
				cout << "Enter new address (or press enter to keep current): ";
				string newAddress;
				getline(cin, newAddress);
				if (!newAddress.empty()) {
					contactList.contacts[i].address = newAddress;
				}
				cout << endl;
				cout << "Contact updated successfully." << std::endl;
				cout << endl;
			}
			else {
				cout << endl;
				cout << "Contact not found" << std::endl;
				cout << endl;
			}
		}
	}
}