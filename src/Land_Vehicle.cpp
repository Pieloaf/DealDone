#include "Land_Vehicle.h"

Land_Vehicle::Land_Vehicle()
{
    //ctor
}
Land_Vehicle::Land_Vehicle(Manufacturer m1): Vehicle(m1){
}
Land_Vehicle::~Land_Vehicle()
{
    //dtor
}
void Land_Vehicle::displayVehicleDetails(){
    Vehicle::displayVehicleDetails();
    cout << "Num of Door: " << doors << endl;
    cout << "Transmission Type: " << transmission << endl;
}
