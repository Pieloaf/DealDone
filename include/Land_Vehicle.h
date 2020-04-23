#ifndef LAND_VEHICLE_H
#define LAND_VEHICLE_H

#include <Vehicle.h>


class Land_Vehicle : public Vehicle
{
    public:
        // default constructors
        Land_Vehicle();
        virtual ~Land_Vehicle();

        // user defined constructors
        Land_Vehicle(Manufacturer m);

        /// Function Declarations
        // Generated Accessors and Mutators

        string getTransmission() { return transmission; }
        void setTransmission(string val) { transmission = val; }
        int getDoors() { return doors; }
        void setDoors(int val) { doors = val; }
        int getMileage() { return mileage; }
        void setMilage(int val) { mileage = val; }
        // User Defined Accessors and Mutators

        // User Defined Functions

        // Overridden Functions
        void displayVehicleBasics();
        void displayVehicleDetails();

        void operator= (Land_Vehicle &veh1); // overloaded equals operator. It acts as a true equals and makes all the data members the same.

        // Friend Functions
        friend bool operator== (Land_Vehicle &veh1, Land_Vehicle &veh2); // overloaded comparison operators, these will check that all the data members are equal/not equal
        friend bool operator!= (Land_Vehicle &veh1, Land_Vehicle &veh2);


    protected:

    private:
        string transmission;
        int doors;
        int mileage;
};

#endif // LAND_VEHICLE_H
