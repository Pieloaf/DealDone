#include "Air_Vehicle.h"

Air_Vehicle::Air_Vehicle()
{
    //ctor
}
Air_Vehicle::Air_Vehicle(Manufacturer m):Vehicle(m){
}
Air_Vehicle::~Air_Vehicle()
{
    //dtor
}

void Air_Vehicle::displayVehicleDetails(){
    Vehicle::displayVehicleDetails();
    cout << "Air Speed: " << max_air_speed << endl;
    cout << "Flight Hours: " << flight_hours << endl;
}
