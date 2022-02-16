#include "ShrubberyCreationForm.hpp"

ShrubberyCreationFrom::ShrubberyCreationFrom() : From("SCF", 145, 137), _Traget("?") {
    //std::cout << "Class SCF -> Default constructor call" << std::endl;
}

ShrubberyCreationFrom::ShrubberyCreationFrom(ShrubberyCreationFrom const &inst) {
    //std::cout << "Class SCF -> Copy constructor call" << std::endl;
    *this = inst;
}

ShrubberyCreationFrom::ShrubberyCreationFrom(std::string Target) : From("SCF", 145, 137), _Traget(Target) {
    //std::cout >> "Class SCF -> Parametric constructor call" << std::endl;
}

ShrubberyCreationFrom::~ShrubberyCreationFrom() {
    //std::cout << "Class SCF -> Destructor call" << std::endl;
}

std::string ShrubberyCreationFrom::getTraget() const {
    return _Traget;
}

void    ShrubberyCreationFrom::print_tree(std::string Traget) const {
    std::string filename = Traget + "_shrubbery";
    std::ofstream file(filename.c_str());
    file << "              v .   ._, |_  .,     " << std::endl;
    file << "       `-._\\/  .  \\ /    |/_       " << std::endl;
    file << "           \\  _\\, y | \\//         " << std::endl;
    file << "     _\\_.___\\, \\/ -.\\||          " << std::endl;
    file << "       `7-,--.`._||  / / ,         " << std::endl;
    file << "       /'     `-. `./ / |/_.'      " << std::endl;
    file << "                 |    |//          " << std::endl;
    file << "                 |_    /           " << std::endl;
    file << "                 |-   |            " << std::endl;
    file << "                 |   =|            " << std::endl;
    file << "                 |    |            " << std::endl;
    file << "----------------/ ,  . \\--------._ " << std::endl;
    file.close();
}

void    ShrubberyCreationFrom::execute(Bureaucrat const &inst) const {
    
    inst.executeForm(*this);
    try{
		if (this->getSigned() && inst.getGrade() <= this->getGradeExec())
            this->print_tree(this->getTraget());
		else if (!this->getSigned())
			throw From::execFail();
		else
			throw From::GradeTooLowException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

ShrubberyCreationFrom   &ShrubberyCreationFrom::operator=(ShrubberyCreationFrom const &inst) {
    _Traget = inst.getTraget();
    return *this;
}