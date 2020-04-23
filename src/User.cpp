#include "User.h"

User::User():name("Guest") //initialiser list
{

}

User::User(std::string usrname):name(usrname) //initialiser list
{

}

User::~User()
{

}

void User::myVehicles(){

	//iterates through owned vehicles vector and prints out the index+1 and model_name of all objects in the vector
	for (int i = 0;i < int(owned_vehicles.size()); i++)
	{
		cout << i+1 << ". " << owned_vehicles[i]->getModelName() << endl;
	}
}

void User::listDetails()
{
	//prints the User objects name data member and the Vehicle objects in the owned_vehicles vector
	cout << "User Name: " << name << endl;
	cout << "Owned Vehicles: " << endl;
	myVehicles();
}
void User::removeOwnedVehicle(Vehicle* v)
{
	// itterates to the given vehicle object from the owned_vehicles vector and removes it from the vector
	for(int x=0;x < int(owned_vehicles.size()); x++)
    {
        if (v == owned_vehicles[x])
			owned_vehicles.erase(owned_vehicles.begin() + x);
		break;
    }
}
ostream& operator<< (ostream& ostr, const User& u) // outputs basic user data when
{
	ostr << "User Name: \t" << u.name << endl;
	ostr << "Owned Vehicles: " << u.owned_vehicles.size() << endl;
	return ostr;
}
