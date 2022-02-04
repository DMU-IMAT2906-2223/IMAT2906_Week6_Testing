#pragma once
#include<iostream>
#include<string>
class GameObject {
public:
	GameObject(); // Default constructor
	GameObject(std::string sString);
	GameObject(int i);
	
	void setHealth(int iHealth); //Causes ambiguity if class not virtual in inheritance.
	std::string moveObject(int x, int y); //Returns the position of the object.
	int getHealth();

	//Pure virtual function
	virtual int score() = 0;


protected:
	int i_Health;
	std::string sLocation;
}; 
