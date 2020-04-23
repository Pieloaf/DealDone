#include "StoreManager.h"
int StoreManager::num_stores=0; //initialising static int for number of stores to 0

StoreManager::StoreManager(std::string usrname, std::string sname):User(usrname),store_name(sname) //initialiser list
{
    // setting default values
    num_stores++; //increments static variable
    description = "No Description";
}

//Constructor used when convert User object to Store Manager Object
StoreManager::StoreManager(User u, std::string sname):User(u.getName()) //initialiser list
{
    // setting values
    store_name = sname; // sets store_name

    setOwnedVehicleVec(u.getOwnedVehicleVec()); // copies the users owned vehicles to the store managers owned vehciles
    u.~User();

    num_stores++; //increments static variable
}

StoreManager::~StoreManager()
{
    num_stores--; //decrements static variable
}

void StoreManager::displayListedVehicles()
{
    // iterates through vector of vechicle objects in listed_vehicles vector and prints out the index+1 and the model_name
    for(int i = 0; i < int(listed_vehicles.size()); i++)
    {
        cout << i+1 << ". ";
        listed_vehicles[i]->displayVehicleDetails();
    }
}

void StoreManager::unlistVehicle(int i)
{
    // removes the vehicle object at index i of listed_vehicles vector
    listed_vehicles.erase(listed_vehicles.begin()+i);
}

void StoreManager::listDetails() //overriden function from parent class to show all of the store manager details
{
    cout << "Username: " << getName() << endl; // outputs various data
    cout << "Store Name: " << store_name << endl;
    cout << "Description: " << description << endl;
    cout << "Listed Vehicles: " << endl;

    if (listed_vehicles.size() > 0){ // only shows listed vehicles if there are listed vehicles
        displayListedVehicles();
    }
    else cout << "No Vehicles Listed" << endl;

    cout << "Owned Vehicles:" << endl;
    if (numOwnedVehicles() > 0){ // only shows owned vehicles if there are owned vehicles
        myVehicles(); // calls function to list owned vehicles
    }
    else cout << "No Owned Vehicles" << endl;
}

void StoreManager::sellListedVehicle(User& u, Vehicle* v)
{
    // calls buy function from user class to add vehicle object to ownedVehciles vector
    u.buyVehicle(v);
    int vehicle_checker = 0; // checker to see if vehicle isnt found

    // itterates to the given vehicle object from the listed_vehicles vector and removes it from the vector once found
    for(int x = 0; x < int(listed_vehicles.size()); x++)
    {
        if (v==listed_vehicles[x])
        {
            unlistVehicle(x);
            vehicle_checker = 1;
            break;
        }
    }

    if(vehicle_checker == 0) { // outputs error message if the vehicle has not been found
            cout << "Error, Vehicle not found." << endl;
    }
}

ostream& operator<< (ostream& ostr, const StoreManager& u)
{
	ostr << "Store Name: \t" << u.store_name << endl;
	ostr << "Listed Vehicles: " << u.listed_vehicles.size() << endl;
	return ostr;
}
