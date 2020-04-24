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
        Air_Vehicle(Manufacturer* m);

        /// Function Declarations
        // Generated Accessors and Mutators

        int getMaxAirSpeed() { return max_air_speed; }
        void setMaxAirSpeed(int val) { max_air_speed = val; }

        int getFlightHours() { return flight_hours; }
        void setFlightHours(int val) { flight_hours = val; }

        // User Defined Accessors and Mutators

        // User Defined Functions
        void operator= (Air_Vehicle &veh1);  // overloaded equals operator. It acts as a true equals and makes all the data members the same.

        // Overwritten Functions
        void displayVehicleBasics(); // displays basic vehicle info
        void displayVehicleDetails(); // display full vehicle details

        //friend functions
        friend bool operator== (Air_Vehicle &veh1, Air_Vehicle &veh2);  // overloaded comparison operators, these will check that all the data members are equal/not equal
        friend bool operator!= (Air_Vehicle &veh1, Air_Vehicle &veh2);

    protected:

    private:
        int max_air_speed;
        int flight_hours;
};

#endif // AIR_VEHICLE_H
