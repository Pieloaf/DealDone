#ifndef VEHICLE_H
#define VEHICLE_H

#include <vector>
#include <string>
#include <iostream>

#include "Manufacturer.h"
#include "Vehicle.h"

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
        void setSeats(int val) { seats = val; }
        string getVehicleColour() { return vehicle_colour; }
        float getLength() { return length; }
        void setLength(float val) { length = val; }
        float getWidth() { return width; }
        void setWidth(float val) { width = val; }
        float getWeight() { return weight; }
        void setWeight(float val) { weight = val; }
        string getDescription() { return description; }
        void setDescription(string val) { description = val; }
        string getModel_Name() { return model_name; }
        void setModel_Name(string val) { model_name = val; }

        // User Defined Accessor and Mutators
        void setVehicleManu(Manufacturer m1);

        // User Defined Functions
        void displayVehicleDetails();

    protected:

    private:
        /// Variables
        // simple data types
        int price;
        int seats;
        float length;
        float width;
        float weight;
        string description;
        string model_name;

        // constants
        string vehicle_colour;

        // complex data types
        Manufacturer vehicle_manu;

};

#endif // VEHICLE_H
