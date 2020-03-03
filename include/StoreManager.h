#ifndef STOREMANAGER_H
#define STOREMANAGER_H

#include <iostream>
#include <vector>
#include <string>
#include <User.h>

class StoreManager : public User
{
     public:
          
          StoreManager();
          StoreManager(std::string uname, std::string sname);
          virtual ~StoreManager();

          void displayListedVehicles();
          void addVehicle(Vehicle v){ listedVehicles.push_back(v); };
          void removeVehicle(int i);

          void setStoreName( std::string val ){ storeName=val; }
          std::string getStoreName(){ return storeName; }

          void setDescription( std::string val ){ description=val; }
          std::string getDescription(){ return description; }
          
          //int getNumStores(){return numStores;}  
          //void incNumStores(){numStores++;}        
     protected:

     private:
          static int numStores;
          //int numStores=10;
          std::vector<Vehicle> listedVehicles;
          std::string storeName;
          std::string description;
};
#endif
