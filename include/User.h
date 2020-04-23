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
        void buyVehicle( Vehicle* v ){ owned_vehicles.push_back(v); } // adds a new owned vehicle to the vector
        void removeOwnedVehicle(Vehicle* v); // removes a vehicle that is the same as inputted object

        int numOwnedVehicles(){return owned_vehicles.size();} // special accessor to get the number of owned vehicles
        Vehicle* getOwnedVehicle(int i){ return owned_vehicles[i]; } // special accessor to return a specific vehicle

        void setOwnedVehicleVec(vector<Vehicle*> vec) { owned_vehicles = vec; } // copies the inputted vehicle vector
        vector<Vehicle*> getOwnedVehicleVec(){ return owned_vehicles; }


        //User Defined Member Functions
        void myVehicles(); // ouptuts all owned vehicles into the terminal
        void listDetails(); // lists basic details about the user

        //Friend Functions
        friend ostream& operator<< (ostream&, const User&); // overloaded output operator to allow for easy output of data.

   protected:

   private:
        /// Data Members
        // primitive data types
        const string name;

        // vectors
        vector<Vehicle*> owned_vehicles;
};
#endif
