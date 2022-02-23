#include "MegaBoss.h"

//**
/* Default mclass constructor for the Megaboss. Megaboss inherits from Boss and GameObject.
 *******************************************************************************/
MegaBoss::MegaBoss()
{
}

//Ambiguous without the use of virtual

/**
*The firedOn function. Ued to set the health of the mega boss.
*/
void MegaBoss::firedOn()
{
	setHealth(100); //When fired on, set the health.

	std::cout << "Health of ship : " << getHealth() << std::endl;
	int i_Ship = 0;
	i_Ship = getHealth();
	std::cout << "Health returned\n";

	//Set the health of the megaboss.
	setHealth(damage(50));
	std::cout << "Damage delivered!\n";
	std::cout << "Mega Boss health " << getHealth() << std::endl;
}

//Return the score of the megaboss multiplied by 100.
float MegaBoss::score()
{
	return fScore * 100.f;
}
