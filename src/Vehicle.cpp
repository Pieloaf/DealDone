#include "Vehicle.h"

Vehicle::Vehicle()
{
    // setting default values
    model_name = "Unamed Vehicle";
    description = "No Description";
    year = 1982;
    vehicle_colour = "No Colour";
    seats = 4;
    price = 0;
    vehicle_manu = new Manufacturer; //dynamically creates new object of Manufacturer Class
}

Vehicle::Vehicle(Manufacturer* m): vehicle_manu(m) // Ensure that the passed in manufacturer is a dynamically creates object
{
    // setting default values
    model_name = "Unamed Vehicle";
    description = "No Description";
    year = 1982;
    vehicle_colour = "No Colour";
    seats = 4;
    price = 0;
}

Vehicle::~Vehicle()
{
    //delete vehicle_manu; //deletes the dynamically created manufacturer object to prevent a memory leak
    vehicle_manu = 0;   // sets ptr to 0 to prevent dangling ptr
}

void Vehicle::displayVehicleDetails(){ // outputs vehicle info in a longer format into the terminal
    cout << "Vehicle Name: " << model_name << endl;
    cout << "Year: " << year << endl;
    cout << "Manufacturer: " << vehicle_manu->getName() << endl;
    cout << "Colour: " << vehicle_colour << endl;
    cout << "Price: " << price << endl;
    cout << "Seat count: " << seats << endl; 
    cout << "Description:" << description << endl;
}

bool operator== (Vehicle &veh1, Vehicle &veh2){ // returns the outcome of the comparisong of all the data members in the two objects
    return (veh1.getModelName() == veh2.getModelName()
             && veh1.getVehicleManu() == veh2.getVehicleManu()
             && veh1.getVehicleColour() == veh2.getVehicleColour()
             && veh1.getPrice() == veh2.getPrice()
             && veh1.getSeats() == veh2.getSeats()
             && veh1.getYear() == veh2.getYear()
             && veh1.getDescription() == veh2.getDescription());
}
bool operator!= (Vehicle &veh1, Vehicle &veh2){ // returns the inverse of the == operator
   return !(veh1 == veh2);
}

