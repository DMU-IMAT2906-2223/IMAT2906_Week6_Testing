#include <iostream>
#include <string>
#include "Alien.h"

//**
/* Default constructor for the Alien. Alien inherits from GameObject.
 *******************************************************************************/
Alien::Alien(){
	//std::cout << "Aliens constructor called." << std::endl;
	this->setHealth(100);
};

int Alien::getHealth() {
	return i_Health; ///Ambiguity if virtual is not used in the class definition
};


bool Alien::playerDestroyed()
{


	if (i_Health <= 0) {
		std::cout << "Player is destoryed!!!" << std::endl;
		return false;
	}
	else if(i_Health > 0){
		std::cout << "Player is alive!!!" << std::endl;
		return true;
	}
}
int Alien::score ()
{
	return 0;
}
int Alien::test()
{
	return 0;
}
;