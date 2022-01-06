#ifndef CLASS_CONTACT_HPP
#define CLASS_CONTACT_HPP
#include <string>

class contact{
public:
	contact();
	~contact();
	std::string getInfo(int);
	void setInfo();
private:
	std::string	_FirstName;
	std::string _LastName;
	std::string _Nickname;
	std::string _PhoneNumber;
	std::string _DarkestSecret;
	std::string take_FirstName();
	std::string take_LastName();
	std::string take_Nickname();
	std::string take_PhoneNumber();
	std::string take_DarkestSecret();
};

#endif