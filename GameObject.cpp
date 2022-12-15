#include <iostream>
#include <string>
#include"GameObject.h"

/***************************************************************************//**
 * This is the main base class for the whole piece of code.
 ******************************************************************************/
GameObject::GameObject() {
	//std::cout << "GameObjects constructor called." << std::endl;
}; 

///Overriden base class using string.
GameObject::GameObject(std::string sString) {
	std::cout << "GameObjects string is" + sString << std::endl;
};

///Overriden base class using string.
GameObject::GameObject(int i)
{
	std::cout << "GameObjects int is" + i << std::endl;
};

///GameObject function to set the health.
void GameObject::setHealth(int iInput) {
	iHealth = iInput;
};

///GameObject function that moves the object by x and y positions. Returns the position of the object.
std::string GameObject::moveObject(int x, int y) {
	std::cout << "Position of game object: " << x << " : " << y << std::endl;
	std::string s = "moving";
	return s;
}

///GameObject function to get the health.
int GameObject::getHealth()
{
	return iHealth;
};

void GameObject::setLocation(std::string locationIn)
{
	sLocation = locationIn;
};

std::string GameObject::getLocation()
{
	return sLocation;
};