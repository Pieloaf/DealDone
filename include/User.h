#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"

class User
{
   public:
        User();
        virtual ~User();
        
        void setName( std::string val ){ name=val; }
        std::string getName(){ return name; }
        
        void myVehicles();
        void listDetails();
        
        void buy( Vechicle v ){ ownedVehicles.push_back(v); }
        Vehicle browse( Vehicle v ){ return v; }
        
   protected:
   
   private:
        std::string name;
        vector<Vehicle> ownedVehicles = {};
};
#endif
