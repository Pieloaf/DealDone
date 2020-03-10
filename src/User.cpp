#include "User.h"

User::User(std::string usrname):name(usrname)	
{
}

User::~User()
{

}

void User::myVehicles(){
	std::cout << "My Vehicles: " << std::endl;
	for (int i = 0; i < int(ownedVehicles.size()); i++)
	{
		std::cout << "\t" << i+1 << ". " << ownedVehicles[i].getModel_Name() << std::endl;
	}
}

void User::listDetails()
{
	std::cout << "User Name: \t" << name << std::endl;
	std::cout << "Owned Vehicles:\t" << ownedVehicles.size() << endl;
}
