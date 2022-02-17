#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("SCF", 145, 137), _Traget("?") {
    //std::cout << "Class SCF -> Default constructor call" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &inst) {
    //std::cout << "Class SCF -> Copy constructor call" << std::endl;
    *this = inst;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("SCF", 145, 137), _Traget(Target) {
    //std::cout >> "Class SCF -> Parametric constructor call" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    //std::cout << "Class SCF -> Destructor call" << std::endl;
}

std::string ShrubberyCreationForm::getTraget() const {
    return _Traget;
}

void    ShrubberyCreationForm::print_tree(std::string Traget) const {
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

void    ShrubberyCreationForm::execute(Bureaucrat const &inst) const {
    
    inst.executeForm(*this);
    try{
		if (this->getSigned() && inst.getGrade() <= this->getGradeExec())
            this->print_tree(this->getTraget());
		else if (!this->getSigned())
			throw Form::execFail();
		else
			throw Form::GradeTooLowException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &inst) {
    _Traget = inst.getTraget();
    return *this;
}