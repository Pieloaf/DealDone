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
void Land_Vehicle::displayVehicleBasics(){
    //TODO add small vehicle asci image
    cout << B_LBLUE << getModel_Name() << endl;
    cout << B_BLUE << getYear() << " - " << getVehicleManuName() << " - " << getMileage() << " km" << endl;
    cout << getPrice() << " €" << endl;

}
void Land_Vehicle::displayVehicleDetails(){
    //TODO add small vehicle asci image
    Vehicle::displayVehicleDetails();
    cout << "Num of Door: " << doors << endl;
    cout << "Transmission Type: " << transmission << endl;
}
bool operator== (Land_Vehicle &veh1, Land_Vehicle &veh2){
    return (veh1.getDoors() == veh2.getDoors() && veh1.getTransmission() == veh2.getTransmission() && veh1.getWidth() == veh2.getWidth() && veh1.getModel_Name() == veh2.getModel_Name() && veh1.getVehicle_Manu() == veh2.getVehicle_Manu() && veh1.getVehicleColour() == veh2.getVehicleColour() && veh1.getPrice() == veh2.getPrice() && veh1.getLength() == veh2.getLength() && veh1.getSeats() == veh2.getSeats() && veh1.getYear() == veh2.getYear() && veh1.getDescription() == veh2.getDescription() && veh1.getWeight() == veh2.getWeight());
}
bool operator!= (Land_Vehicle &veh1, Land_Vehicle &veh2){
    return !(veh1 == veh2);
}
