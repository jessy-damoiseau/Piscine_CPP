#include "../header/polymorphism.h"


int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *mechant = new WrongAnimal();
	const WrongAnimal *mechantchat = new WrongCat();
	std::cout << mechant->getType() << " " << std::endl;
	std::cout << mechantchat->getType() << " " << std::endl;
	mechant->makeSound();
	mechantchat->makeSound();

	delete meta;
	delete i;
	delete j;
	delete mechant;
	delete mechantchat;
}
