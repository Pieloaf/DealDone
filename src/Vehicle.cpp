#include "Vehicle.h"

Vehicle::Vehicle()
{
    //ctor
}
Vehicle::Vehicle(Manufacturer m): vehicle_manu(m){ // initialliser list
}
Vehicle::~Vehicle()
{

}

void Vehicle::displayVehicleDetails(){
    //TODO add bigger vehicle asci image
    cout << "***" << endl;
    cout << "Vehicle Name: " << model_name << endl;
    cout << "Year: " << year << endl;
    cout << "Manufacturer: " << vehicle_manu.getName() << endl;
    cout << "Colour: " << vehicle_colour << endl;
    cout << "Price: " << price << endl;
    cout << "Seat count: " << seats << endl;
    cout << "Description:" << description << endl;
    cout << "***" << endl;
}

bool operator== (Vehicle &veh1, Vehicle &veh2){
    return (veh1.getModel_Name() == veh2.getModel_Name() && veh1.getVehicle_Manu() == veh2.getVehicle_Manu() && veh1.getVehicleColour() == veh2.getVehicleColour() && veh1.getPrice() == veh2.getPrice() && veh1.getSeats() == veh2.getSeats() && veh1.getYear() == veh2.getYear() && veh1.getDescription() == veh2.getDescription());
}
bool operator!= (Vehicle &veh1, Vehicle &veh2){

   return !(veh1 == veh2);
}
