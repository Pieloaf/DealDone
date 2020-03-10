#ifndef AIR_VEHICLE_H
#define AIR_VEHICLE_H

#include <Vehicle.h>


class Air_Vehicle : public Vehicle
{
    public:
        // default constructors
        Air_Vehicle();
        virtual ~Air_Vehicle();

        // user defined constructors
        Air_Vehicle(Manufacturer m);

        /// Function Declarations
        // Generated Accessors and Mutators

        int getmax_Air_Speed() { return max_air_speed; }
        void setMax_Air_Speed(int val) { max_air_speed = val; }
        int getFlight_Hours() { return flight_hours; }
        void setFlight_Hours(int val) { flight_hours = val; }

        // User Defined Accessors and Mutators

        // User Defined Functions

        // Overwritten Functions
        void displayVehicleBasics();
        void displayVehicleDetails();

    protected:

    private:
        int max_air_speed;
        int flight_hours;
};

#endif // AIR_VEHICLE_H
