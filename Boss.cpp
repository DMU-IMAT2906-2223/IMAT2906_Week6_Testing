#include <iostream>
#include <string>
#include"Boss.h"

//**
/* Default constructor for the Boss. Boss inherits from GameObject.
 *******************************************************************************/
Boss::Boss() {
	//std::cout << "Boss constructor called." << std::endl;
};

///Boss function to get the current damage.
int Boss::damage(int i_Hit){
	return i_Hit;
};
