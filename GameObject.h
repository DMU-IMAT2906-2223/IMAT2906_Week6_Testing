#pragma once
#include<iostream>
#include<string>
class GameObject {
public:
	GameObject(); // Default constructor
	GameObject(std::string sString); //Overrided constructor with String
	GameObject(int i); //Overriden constructor with int
	
	void setHealth(int iHealth); //Causes ambiguity if class not virtual in inheritance.
	std::string moveObject(int x, int y); //Returns the position of the object.
	int getHealth();
	void setLocation(std::string locationIn);
	std::string getLocation();

	//Pure virtual function
	virtual int score() = 0;


protected:
	int iHealth; //Object health which all objects have. 
	std::string sLocation; //
}; 
