#include "StoreManager.h"

StoreManager::StoreManager()
{

}

StoreManager::~StoreManager()
{

}
void StoreManager::getListedVehicles()
{
    for(int i = 0; i < int(listedVehicles.size()); i++)
    {
        std::cout << listedVehicles[i].getModel_Name() << endl;
    }
}
