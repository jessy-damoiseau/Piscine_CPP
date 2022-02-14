#include "../header/class_contact.hpp"
#include "../header/page_jaune.h"

std::string contact::take_FirstName(){
	std::string firstname;
	std::cout << "What is your first name ?" << std::endl;
	getline(std::cin, firstname);
	while (!firstname[0]){
		std::cout << "error" << std::endl;
		std::cout << "What is your first name ?" << std::endl;
		getline(std::cin, firstname);
	}
	return firstname;
}

std::string contact::take_LastName(){
	std::string lastname;
	std::cout << "What is your last name ?" << std::endl;
	getline(std::cin, lastname);
	while (!lastname[0]){
		std::cout << "error" << std::endl;
		std::cout << "What is your last name ?" << std::endl;
		getline(std::cin, lastname);
	}
	return lastname;
}

std::string contact::take_Nickname(){
	std::string nickname;
	std::cout << "What is your nickname ?" << std::endl;
	getline(std::cin, nickname);
	while (!nickname[0]){
		std::cout << "error" << std::endl;
		std::cout << "What is your nickname ?" << std::endl;
		getline(std::cin, nickname);
	}
	return nickname;
}

std::string contact::take_PhoneNumber(){
	std::string	phonenumber;
	std::cout << "What is your phone number ?" << std::endl;
	getline(std::cin, phonenumber);
	while (!phonenumber[0]){
		std::cout << "error" << std::endl;
		std::cout << "What is your phone number ?" << std::endl;
		getline(std::cin, phonenumber);
	}
	return phonenumber;
}

std::string contact::take_DarkestSecret(){
	std::string darkestsecret;
	std::cout << "What's your darkest secret?" << std::endl;
	getline(std::cin, darkestsecret);
	while (!darkestsecret[0]){
		std::cout << "error" << std::endl;
		std::cout << "What's your darkest secret?" << std::endl;
		getline(std::cin, darkestsecret);
	}
	return darkestsecret;
}

contact::contact() {
	std::cout << "class contact -> constructor called" << std::endl;
}
contact::~contact() {
	std::cout << "class contact -> destructor called" << std::endl;
}

std::string contact::getInfo(int i){
	switch (i){
		case 0:
			return this->_FirstName;
		case 1:
			return this->_LastName;
		case 2:
			return this->_Nickname;
		case 3:
			return this->_PhoneNumber;
		case 4:
			return this->_DarkestSecret;
		default:
			return 0;
	}
	return 0;
}

void contact::setInfo(){
	this->_FirstName = this->take_FirstName();
	this->_LastName = this->take_LastName();
	this->_Nickname = this->take_Nickname();
	this->_PhoneNumber = this->take_PhoneNumber();
	this->_DarkestSecret = this->take_DarkestSecret();
}


