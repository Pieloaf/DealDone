#include "User.h"

User::User():name("guest") //initialiser list
{
}

User::User(std::string usrname):name(usrname) //initiliser list
{
}

User::~User()
{

}

//
void User::myVehicles(){

	//iterates through owned vehicles vector and prints out the index+1 and model_name of all objects in the vector
	for (int i = 0; i < ownedVehicles.size(); i++)
	{
		cout << "\t" << i+1 << ". " << ownedVehicles[i]->getModel_Name() << endl;
	}
}

void User::listDetails()
{
	//prints the User objects name data member and the number of Vehicle objects in the ownedVehicles vector 
	cout << "User Name: \t" << name << endl;
	cout << "Owned Vehicles: " << ownedVehicles.size() << endl;
}
void User::removeVehicle(Vehicle* v)
{
	// itterates to the given vehicle object from the ownedVehicles vector and removes it from the vector
	for(int x=0; x<ownedVehicles.size()-1; x++)
    {
		int i = x--;
        if (v==ownedVehicles[x])
			ownedVehicles.erase(ownedVehicles.begin()+i);
		break;
    }
}

ostream& operator<< (ostream& ostr, const User& u)
{
	ostr << "User Name: \t" << u.name << endl;
	ostr << "Owned Vehicles: " << u.ownedVehicles.size() << endl;
	return ostr;
}