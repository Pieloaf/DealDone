#include "Air_Vehicle.h"

Air_Vehicle::Air_Vehicle():Vehicle() // initializer list
{
    cout << "Constructing a Air_Vehicle Object..." << endl;
    max_air_speed = 0; // sets default values
    flight_hours = 0;
}
Air_Vehicle::Air_Vehicle(Manufacturer* m):Vehicle(m) // initializer list
{
    Air_Vehicle(); // calls default constructor for default values
}
Air_Vehicle::~Air_Vehicle()
{
    //dtor
}
void Air_Vehicle::displayVehicleBasics(){ // Outputs basic data onto the console
    //TODO add small vehicle asci image
    cout << "---------"<< endl;
    cout << getModelName() << endl;
    cout << BLUE << getYear() << " - " << getVehicleManuName() << " - " << flight_hours << " Hrs" << endl;
    cout << GREN << getPrice() << " €" << NOCOL << endl;
    cout << "---------"<< endl;
}

void Air_Vehicle::displayVehicleDetails(){ // ouputs all the details of the vehicle
    cout << "***" << endl << BLUE; // sets colour *** see colour.h for more info***
    Vehicle::displayVehicleDetails(); // calls parent function for more details
    // air vehicle details
    cout << "Air Speed: " << max_air_speed << "km/hr" << endl;
    cout << "Flight Hours: " << flight_hours << NOCOL << endl;
    cout << "***" << endl; // removes colour
}

bool operator== (Air_Vehicle &veh1, Air_Vehicle &veh2){ // compares all datamembers between the two vehicles and returns the logic answer
    return (veh1.getFlightHours() == veh2.getFlightHours()
             && veh1.getMaxAirSpeed() == veh2.getMaxAirSpeed()
             && veh1.getModelName() == veh2.getModelName()
             && veh1.getVehicleManu() == veh2.getVehicleManu()
             && veh1.getVehicleColour() == veh2.getVehicleColour()
             && veh1.getPrice() == veh2.getPrice()
             && veh1.getSeats() == veh2.getSeats()
             && veh1.getYear() == veh2.getYear()
             && veh1.getDescription() == veh2.getDescription());
}
bool operator!= (Air_Vehicle &veh1, Air_Vehicle &veh2){ // gets the opposite of the == operator
    return !(veh1 == veh2);
}

void Air_Vehicle::operator= (Air_Vehicle &veh1){ // emulates a "true equals" as to allow for object cloning
    /// Sets the various data members of the selected object to that of the other object
    // Vehicle data members
    this->setModelName(veh1.getModelName());
    this->setDescription(veh1.getDescription());
    this->setVehicleColour(veh1.getVehicleColour());
    this->setYear(veh1.getYear());
    this->setSeats(veh1.getSeats());
    this->setVehicleManu(veh1.getVehicleManu());

    //Air Vehicle data members
    this->setFlightHours(veh1.getFlightHours());
    this->setMaxAirSpeed(veh1.getMaxAirSpeed());
}
