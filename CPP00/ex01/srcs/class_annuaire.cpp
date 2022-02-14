#include "../header/class_annuaire.hpp"
#include "../header/page_jaune.h"

PhoneBook::PhoneBook() {
    //std::cout << "class annuaire -> constructor called" << std::endl;
    this->_NbUser = 0;
	this->_Nbtab = 0;
    return;
}

PhoneBook::~PhoneBook() {
    //std::cout << "class annuaire -> destructor called" << std::endl;
    return;
}

void PhoneBook::addToPhoneBook(){

	this->_AllContact[this->_Nbtab++].setInfo();
	
	if (_NbUser < 8)
		_NbUser++;
	if (_Nbtab == 8)
		_Nbtab = 0;

}

void PhoneBook::_PrintTab(){
	std::string info;
	std::cout << "--------------------------------------------" << std::endl;
	for (int Cloop = 0; Cloop < this->_NbUser; Cloop++)
	{
		std::cout << "|" << Cloop << "        |";
		for (int Iloop = 0; Iloop < 3; Iloop++) {
			info = (this->_AllContact[Cloop]).getInfo(Iloop);
			if (info.length() > 10) {
				for (int LIloop = 0; LIloop < 10; LIloop++)
					std::cout << info[LIloop];
				std::cout << ".|";
			}
			else {
				std::cout << info;
				for (int j = info.length(); j < 10; j++)
					std::cout << " ";
				std::cout << "|";
			}
		}
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
}

int	PhoneBook::_TakeIndex(){
	std::string str;
	if (this->_NbUser - 1 == 0)
		std::cout << "choose index 0 or " << this->_NbUser << " to leave" << std::endl;
	else
		std::cout << "choose an index between 0 and " << this->_NbUser - 1 << " ou " << this->_NbUser << " to leave" << std::endl;
	getline(std::cin, str);
	int c = str[0] - '0';
	while (str.length() != 1 || !isdigit(str[0]) || !(c >= 0 && c <= this->_NbUser))
	{
		std::cout << "wrong data" << std::endl;
		if (this->_NbUser - 1 == 0)
			std::cout << "choose index 0 or " << this->_NbUser << " to leave" << std::endl;
		else
			std::cout << "choose an index between 0 and" << this->_NbUser - 1 << " ou " << this->_NbUser << " to leave" << std::endl;
		getline(std::cin, str);
		c = str[0] - '0';
	}
	return c;
}

void PhoneBook::searchInPhoneBook(){

	int c;

	if (this->_NbUser == -1){
		std::cout << "no one is in the directory" << std::endl;
		return;
	}
	this->_PrintTab();
	c = this->_TakeIndex();
	if (c != this->_NbUser) {
		std::cout << "Info :" << std::endl;
		for (int Uloop = 0; Uloop < 4; Uloop++)
			std::cout << "   -" << this->_AllContact[c].getInfo(Uloop) << std::endl;
	}
	std::cout << std::endl;
}

