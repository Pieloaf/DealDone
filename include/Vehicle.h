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

class Vehicle
{
    public:
        // default constructors
        Vehicle();
        virtual ~Vehicle();
        //user defined constructors
        Vehicle(Manufacturer m);

        /// Function Declarations
        // Generated Accessors and Mutators
        int getPrice() { return price; }
        void setPrice(int val) { price = val; }

        int getSeats() { return seats; }
        int getYear() { return year; }
        void setYear(int val) { year = val; }
        void setSeats(int val) { seats = val; }

        string getVehicleColour() { return vehicle_colour; }

        string getDescription() { return description; }
        void setDescription(string val) { description = val; }

        string getModel_Name() { return model_name; }
        void setModel_Name(string val) { model_name = val; }

        // User Defined Accessor and Mutators
        void setVehicleManu(Manufacturer m){ vehicle_manu = m; }
        string getVehicleManuName() { return vehicle_manu.getName(); }

        Manufacturer getVehicle_Manu() {return vehicle_manu; }

        // User Defined Functions
        virtual void displayVehicleBasics() = 0;
        virtual void displayVehicleDetails();

        // Friend Functions
        friend bool operator== (Vehicle &veh1, Vehicle &veh2);
        friend bool operator!= (Vehicle &veh1, Vehicle &veh2);

    protected:

    private:
        /// Variables
        // simple data types
        unsigned int price;
        unsigned int seats;
        int year;
        string description;
        string model_name;

        // constants
        string vehicle_colour;

        // complex data types
        Manufacturer vehicle_manu;

};

#endif // VEHICLE_H
