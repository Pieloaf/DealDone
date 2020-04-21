#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

#include "Vehicle.h"
#include "Colours.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::ostream;

class User
{
   public:
        //default constructors
        User();
        virtual ~User();
        // user defined constructors
        User(string usrname);

        //Function Declarations 
        // Generated Accessors and Mutators
        string getName(){ return name; }

        // User Defined Accessors and Mutators
        void buy( Vehicle* v ){ ownedVehicles.push_back(v); }
        void removeVehicle(Vehicle* v);
        int numVehicles(){ownedVehicles.size();}
        Vehicle* getVehicle(int i);

        //User Defined Functions
        void myVehicles();
        void listDetails();

        friend ostream& operator<< (ostream&, const User&);

   protected:

   private:
        /// Data Members
        // primitive data types
        const string name;

        // vectors
        vector<Vehicle*> ownedVehicles;
};
#endif
