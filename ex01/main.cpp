/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:08:52 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:08:54 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*  int main()
 {
     Dog jul;
     Dog lil(jul);

    std::cout << "Brain Pointers Memory Adress: " << jul.getBrain() << std::endl;   
    std::cout << "Brain Pointers Memory Adress: " << lil.getBrain() << std::endl;
    std::cout << std::endl;
    return (0);
}

int main()
{
    Animal *anim[4];
    
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
    
}
 */

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
	delete i;

     return 0;
}