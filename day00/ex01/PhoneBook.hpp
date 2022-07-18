#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	Contact	_contact[8];
	size_t	_count;
	size_t	_contactIndex;

	void showBanner() const;
public:
	PhoneBook();
	~PhoneBook();

	bool addContact();
	bool searchContact() const;
};

#endif //CPP_PHONEBOOK_HPP
