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
void Air_Vehicle::displayVehicleBasics(){
    //TODO add small vehicle asci image
    cout << getModel_Name() << endl;
    cout << getYear() << " - " << getVehicleManuName() << " - " << flight_hours << " Hrs" << endl;
    cout << getPrice() << " €" << endl;

}
void Air_Vehicle::displayVehicleDetails(){
    Vehicle::displayVehicleDetails();
    cout << "Air Speed: " << max_air_speed << endl;
    cout << "Flight Hours: " << flight_hours << endl;
}
bool operator== (Air_Vehicle &veh1, Air_Vehicle &veh2){
    return (veh1.getFlight_Hours() == veh2.getFlight_Hours() && veh1.getmax_Air_Speed() == veh2.getmax_Air_Speed() && veh1.getModel_Name() == veh2.getModel_Name() && veh1.getVehicle_Manu() == veh2.getVehicle_Manu() && veh1.getVehicleColour() == veh2.getVehicleColour() && veh1.getPrice() == veh2.getPrice() && veh1.getSeats() == veh2.getSeats() && veh1.getYear() == veh2.getYear() && veh1.getDescription() == veh2.getDescription());
}
bool operator!= (Air_Vehicle &veh1, Air_Vehicle &veh2){
    return !(veh1 == veh2);
}
