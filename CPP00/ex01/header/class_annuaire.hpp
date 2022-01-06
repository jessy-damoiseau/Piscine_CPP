#ifndef PAGE_JAUNE_H
#define PAGE_JAUNE_H
#include "class_contact.hpp"


class annuaire {
public:
    annuaire();
    ~annuaire();
    void addToAnnuaire();
    void searchInAnnuaire();

private:
	contact _AllContact[8];
	int		_NbUser;
	void	_PrintTab();
	int		_TakeIndex();
};


#endif