#include "Vehicle.h"

Vehicle::Vehicle()
{
    //ctor
}
Vehicle::Vehicle(Manufacturer m){
    vehicle_manu = m;
}
Vehicle::~Vehicle()
{
    //dtor
}

void Vehicle::displayVehicleDetails(){
    cout << "***" << endl;
    cout << "Vehicle Name: " << model_name << endl;
    cout << "Manufacturer: " << vehicle_manu.getName() << endl;
    cout << "Colour: " << vehicle_colour << endl;
    cout << "Price: " << price << endl;
    cout << "Dimensions: " << length << "m x " << width << "m" << endl;
    cout << "Seat count: " << seats << endl;
    cout << "Description:" << description << endl;
    cout << "***" << endl;
}
