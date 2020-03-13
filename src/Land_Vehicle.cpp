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
