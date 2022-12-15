#pragma once
#include<iostream>
#include<string>
#include"GameObject.h"

class Alien : public virtual GameObject { //Gameobject needs to be virtual to stop ambiguity
public:
	Alien(); // Default constructor
	int getHealth();
	bool playerDestroyed();

	//Virtual function
	int score () override;
};
