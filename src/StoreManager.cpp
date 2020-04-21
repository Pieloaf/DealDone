#include "StoreManager.h"
int StoreManager::numStores=0; //initialising static int for number of stores to 0

StoreManager::StoreManager(std::string usrname, std::string sname):User(usrname) //initialiser list
{
    StoreManager::setStoreName(sname);
    numStores++; //increments static variable
    description = "none";
}

//Constructor used when convert User object to Store Manager Object 
StoreManager::StoreManager(User u, std::string sname):User(u.getName()) //initialiser list
{ 
    StoreManager::setStoreName(sname);
    
    // copies all elements from one vector to another
    for (int x=0; x<u.numVehicles(); x++)
    {
        addVehicle(getVehicle(x));
        removeVehicle(getVehicle(x));
        u.~User();
    }

    numStores++; //increments static variable

}

StoreManager::~StoreManager()
{
    // When a Store Manager Object is Deleted a User Object is created of the same name with all listed vehicles as owned vehicles
    //User x(StoreManager::getName());
    //for(int v = 0; v<listedVehicles.size(); v++){x.buy(listedVehicles[v]);}
    
    numStores--; //decrements static variable
}

void StoreManager::displayListedVehicles()
{
    // iterates through vector of vechicle objects in listedVehicles vector and prints out the index+1 and the model_name
    for(int i = 0; i < int(listedVehicles.size()); i++)
    {
        std::cout << i+1 << ". "<< listedVehicles[i]->getModelName() << endl;
    }
}

void StoreManager::unlistVehicle(int i)
{
    // removes the vehicle object at index i of listedVehicles vector
    i--;
    listedVehicles.erase(listedVehicles.begin()+i);
}

void StoreManager::listDetails() //over riden function from parent class
{
    // calls the listDetails function from base class
    User::listDetails();
    std::cout << "Store Name: " << storeName << std::endl;
    std::cout << "Description: " << description << std::endl;
}

void StoreManager::sell(User& u, Vehicle* v)
{
    // calls buy function from user class to add vehicle object to ownedVehciles vector
    u.buy(v);

    // itterates to the given vehicle object from the listedVehicles vector and removes it from the vector
    for(int x = 0; x < int(listedVehicles.size()-1); x++)
    {
        if (v==listedVehicles[x])
        {
            unlistVehicle(x);
            break;
        }
    }
}