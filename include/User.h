#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"

class User
{
   public:
//        User();
        User(std::string usrname);
        virtual ~User();

        //void setName( std::string val ){ name=val; }
        std::string getName(){ return name; }

        void myVehicles();
        void listDetails();

        void buy( Vehicle v ){ ownedVehicles.push_back(v); }

   protected:

   private:
        const std::string name;
        vector<Vehicle> ownedVehicles;
};
#endif
