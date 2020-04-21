#include "Land_Vehicle.h"

Land_Vehicle::Land_Vehicle(): Vehicle() // iniatlizer list
{
    doors = 4; // sets default values
    transmission = "Undefined Transmission Type";
}
Land_Vehicle::Land_Vehicle(Manufacturer m1): Vehicle(m1) // initializer list
{
    Land_Vehicle(); // calls default constructor for default values
}
Land_Vehicle::~Land_Vehicle()
{
    //dtor
}
void Land_Vehicle::displayVehicleBasics(){ // outputs basic vehicle data
    //TODO add small vehicle asci image
    cout << B_LBLUE << getModelName() << endl;
    cout << B_BLUE << getYear() << " - " << getVehicleManuName() << " - " << getMileage() << " km" << endl;
    cout << getPrice() << " €" << endl;

}
void Land_Vehicle::displayVehicleDetails(){ // outputs vehicle data
    //TODO add small vehicle asci image
    Vehicle::displayVehicleDetails();
    cout << "Num of Door: " << doors << endl;
    cout << "Transmission Type: " << transmission << endl;
}
bool operator== (Land_Vehicle &veh1, Land_Vehicle &veh2){ // compares all data members to see if they are equal
    return (veh1.getDoors() == veh2.getDoors() && veh1.getTransmission() == veh2.getTransmission() && veh1.getModelName() == veh2.getModelName() && veh1.getVehicleManu() == veh2.getVehicleManu() && veh1.getVehicleColour() == veh2.getVehicleColour() && veh1.getPrice() == veh2.getPrice() && veh1.getSeats() == veh2.getSeats() && veh1.getYear() == veh2.getYear() && veh1.getDescription() == veh2.getDescription());
}
bool operator!= (Land_Vehicle &veh1, Land_Vehicle &veh2){ // gets the inverse of the == operator
    return !(veh1 == veh2);
}
