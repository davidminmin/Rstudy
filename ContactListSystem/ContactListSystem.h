#include <iostream>
#include <string>
using namespace std;

#define MAX_CONTACT_NUM 100

struct Contact
{
    string name;
	int age;
    string phone;
    string email;
	string address;
};

struct ContactList
{
    Contact contacts[MAX_CONTACT_NUM];
    int contactNum;
};

#ifndef CONTACTLISTSYSTEM_H
#define CONTACTLISTSYSTEM_H

void ShowMenu();
void CinMenu(int * option, ContactList &contactList);
void AddContact(ContactList &contactList);
void ShowContact(ContactList &contactList);
void DeleteContact(ContactList &contactList);
void SearchContact(ContactList &contactList);
void EidtContact(ContactList &contactList);

#endif