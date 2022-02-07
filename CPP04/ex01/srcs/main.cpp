#include "../header/polymorphism.h"

int main(){

	Animal *tab[4];
	for (int loop = 0; loop < 4; loop++) {
		if (loop < 2)
			tab[loop] = new Dog();
		else
			tab[loop] = new Cat();
	}

	Dog *myDog = new Dog();
	Cat	*myCat = new Cat();

	for(int Dloop = 0; Dloop < 100; Dloop++)
		myDog->setIdeas("MANGER", Dloop);
	for(int Cloop = 0; Cloop < 100; Cloop++)
		myCat->setIdeas("faire chier", Cloop);
	std::cout << std::endl;

	std::cout << myDog->getType() << std::endl;
	std::cout << "Sound -> ";
	myDog->makeSound();
	std::cout << "idea 1 -> " << myDog->getIdeas(0) << std::endl;
	std::cout << "idea 2 -> " << myDog->getIdeas(1) << std::endl;
	std::cout << "idea 3 -> " << myDog->getIdeas(2) << std::endl;
	std::cout << ". . . "<< std::endl;
	std::cout << "idea 100 -> " << myDog->getIdeas(99) << std::endl;
	std::cout << std::endl;

	std::cout << myCat->getType() << std::endl;
	std::cout << "Sound -> ";
	myCat->makeSound();
	std::cout << "idea 1 -> " << myCat->getIdeas(0) << std::endl;
	std::cout << "idea 2 -> " << myCat->getIdeas(1) << std::endl;
	std::cout << "idea 3 -> " << myCat->getIdeas(2) << std::endl;
	std::cout << ". . . "<< std::endl;
	std::cout << "idea 100 -> " << myCat->getIdeas(99) << std::endl;
	std::cout << std::endl;

	delete myDog;
	delete myCat;

	for (int loop = 0; loop < 4; loop++)
		delete tab[loop];
}
