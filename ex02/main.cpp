#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/* int main()
{
    Animal *anim[4];
    // doesn't compile: Animal is abstract
    
    int i = 0;
    while (i < 4)
    {
        if (i < 2)
            anim[i] = new Dog();
        else
            anim[i] = new Cat(); 
        i++;           
    }
    i = 0;
    while (i < 4)
    {
        delete anim[i];
        i++;
    }
    return (0);
} */

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	i->makeSound();
	j->makeSound();
    
    delete j;//should not create a leak
	delete i;

     return 0;
}
