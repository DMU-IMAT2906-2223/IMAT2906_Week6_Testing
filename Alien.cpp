#include <iostream>
#include <string>
#include"Alien.h"

//**
/* Default constructor for the Alien. Alien inherits from GameObject.
 *******************************************************************************/
Alien::Alien() {
	//std::cout << "Aliens constructor called." << std::endl;
};

int Alien::getHealth() {
	return iHealth; ///Ambiguity if virtual is not used in the class definition
};


bool Alien::playerDestroyed()
{
	if (iHealth <= 0) {
		std::cout << "Player is destoryed!!!" << std::endl;
		return false;
	}
	else if(iHealth > 0){
		std::cout << "Player is alive!!!" << std::endl;
		return true;
	}
}
float Alien::score ()
{
	return fScore * static_cast<float>(iHealth);
}