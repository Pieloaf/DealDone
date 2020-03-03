#include "StoreManager.h"
int StoreManager::numStores=0;

StoreManager::StoreManager(std::string usrname, std::string sname):User(usrname)
{
    StoreManager::setStoreName(sname);
    numStores++;
}
StoreManager::StoreManager()
{
    //numStores++;
}

StoreManager::~StoreManager()
{
    //numStores--;
}

void StoreManager::displayListedVehicles()
{
    std::cout << "***" << storeName << "***" << endl;
    for(int i = 0; i < int(listedVehicles.size()); i++)
    {
        std::cout << i+1 << ". "<< listedVehicles[i].getModel_Name() << endl;
    }
}

void StoreManager::removeVehicle(int i)
{
    i--;
    listedVehicles.erase(listedVehicles.begin()+i);
}
