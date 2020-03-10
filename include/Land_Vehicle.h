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

        // User Defined Accessors and Mutators

        // User Defined Functions

        // Overwritten Functions
        void displayVehicleDetails();

    protected:

    private:
        string transmission;
        int doors;
};

#endif // LAND_VEHICLE_H
