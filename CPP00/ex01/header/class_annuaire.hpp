#ifndef PAGE_JAUNE_H
#define PAGE_JAUNE_H
#include "class_contact.hpp"


class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    void addToPhoneBook();
    void searchInPhoneBook();

private:
	contact _AllContact[8];
	int		_NbUser;
    int     _Nbtab;
	void	_PrintTab();
	int		_TakeIndex();
};


#endif