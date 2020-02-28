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
          virtual ~StoreManager();

          void getListedVehicles();
          void newVehicle(Vehicle v){ listedVehicles.push_back(v); };
          void removeVehicle(int i);

          void setstore_name( std::string val ){ store_name=val; }
          std::string getstore_name(){ return store_name; }

          void setdescription( std::string val ){ description=val; }
          std::string getdescription(){ return description; }



   protected:
   private:
        std::vector<Vehicle> listedVehicles;
        std::string store_name;
        std::string description;
};
#endif
