#include "User.h"

User::User()
{

}

User::~User()
{

}
void User::myVehicles(){
	std::cout << "My Vehicles: " << std::endl;
	for (int i = 0; i < ownedVehicles.size(); i++)
	{
		std::cout << "\t" << i << ". " << ownedVehicles[i] << std::endl;
	}
}


void User::listDetails();
{
	std::cout << "User Name: \t" << name << std::endl;
	std::cout << "Owned Vehicles:\t" << ownedVehicles.size() << endl;
}
