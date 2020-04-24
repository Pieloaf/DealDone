#ifndef VEHICLE_H
#define VEHICLE_H

#include <vector>
#include <string>
#include <iostream>

#include "Manufacturer.h"
#include "Vehicle.h"

#include "Colours.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::ostream;

class Vehicle
{
    public:
        // default constructors
        Vehicle();
        virtual ~Vehicle();
        //user defined constructors
        Vehicle(Manufacturer* m);

        /// Function Declarations
        // Generated Accessors and Mutators
        int getPrice() { return price; }
        void setPrice(int val) { price = val; }

        int getSeats() { return seats; }
        void setSeats(int val) { seats = val; }

        int getYear() { return year; }
        void setYear(int val) { year = val; }

        void setVehicleColour(string val) { vehicle_colour = val; }
        string getVehicleColour() { return vehicle_colour; }

        string getDescription() { return description; }
        void setDescription(string val) { description = val; }

        string getModelName() const { return model_name; }
        void setModelName(string val) { model_name = val; }

        // User Defined Accessor and Mutators
        Manufacturer* getVehicleManu() { return vehicle_manu; };
        void setVehicleManu(Manufacturer* m){ *vehicle_manu = *m; } // Sets the manufacturer using a pointer. !!!Ensure the object is dynamically allocated!!! Passing the value at one pointer to the other
        string getVehicleManuName() { return vehicle_manu->getName(); } // this is a special accessor to get the name of the manufacturer


        // User Defined Functions
        virtual void displayVehicleBasics() = 0; // fully virtual as vehicle objects do not need this function
        virtual void displayVehicleDetails(); // virtual as to allow it to be overrided by child classes

        // Friend Functions
        friend bool operator== (Vehicle &veh1, Vehicle &veh2); // overloaded as to allow for easy comparisons
        friend bool operator!= (Vehicle &veh1, Vehicle &veh2); // overloaded as to allow for easy comparisons


    protected:

    private:
        /// Data Members
        // primitive data types
        unsigned int price;
        unsigned int seats;
        int year;
        string description;
        string model_name;
        string vehicle_colour;

        // complex data types
        Manufacturer* vehicle_manu;

};

#endif // VEHICLE_H
