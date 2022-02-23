#pragma once
#include<iostream>
#include<string>
#include"Alien.h"
#include"Boss.h"

class MegaBoss : public virtual Boss , public virtual Alien { //Need to be virtual to stop ambiguity
public:
	MegaBoss(); // Default constructor
	void firedOn();
	float score() override;
};
