#pragma once
#include<iostream>
#include<string>
#include"GameObject.h"

class Boss : public virtual GameObject{ //Gameobject needs to be virtual to stop ambiguity
public:
	Boss(); // Default constructor
	int damage(int iHit); //returns an int of the damage
 
protected:
	int iDamage = 0;
};
