#include "Land_Vehicle.h"

Land_Vehicle::Land_Vehicle(): Vehicle() // iniatlizer list
{
    cout << "Constructing a Land_Vehicle Object..." << endl;
    doors = 4; // sets default values
    transmission = "Undefined";
    mileage = 0;
}
Land_Vehicle::Land_Vehicle(Manufacturer m1): Vehicle(m1) // initializer list
{
        Land_Vehicle(); // calls default constructor for default values
}
Land_Vehicle::~Land_Vehicle()
{
    //dtor
}

void Land_Vehicle::displayVehicleBasics(){
    cout << "---------"<< endl;
    cout << getModelName()<< endl;
    cout << BLUE << getYear() << " - " << getVehicleManuName() << " - " <<  getMileage()<< " km" << endl;
    cout << GREN << getPrice() << " €" << NOCOL<< endl;
    cout << "---------"<< endl;

}

void Land_Vehicle::displayVehicleDetails(){ // overwritten function that outputs vehicle data
    cout << "***" << endl << RED; // changes colour ***see colours.h***
    Vehicle::displayVehicleDetails(); // calls parent version for more details
    // land vehicle details
    cout << "Num of Door: " << doors << endl;
    cout << "Transmission Type: " << transmission << NOCOL << endl;
    cout << "***" << endl;
}
bool operator== (Land_Vehicle &veh1, Land_Vehicle &veh2){ // all data members to see if they are equal and returns the outcome
    return (veh1.getDoors() == veh2.getDoors()
             && veh1.getTransmission() == veh2.getTransmission()
             && veh1.getModelName() == veh2.getModelName()
             && veh1.getVehicleManu() == veh2.getVehicleManu()
             && veh1.getVehicleColour() == veh2.getVehicleColour()
             && veh1.getPrice() == veh2.getPrice()
             && veh1.getSeats() == veh2.getSeats()
             && veh1.getYear() == veh2.getYear()
             && veh1.getDescription() == veh2.getDescription());
}
bool operator!= (Land_Vehicle &veh1, Land_Vehicle &veh2){ // gets the inverse of the == operator
    return !(veh1 == veh2);
}
void Land_Vehicle::operator= (Land_Vehicle &veh1){ // emulates a "true equals" as to allow for easy object cloning
    /// Sets the various data members of the selected object to that of the other object
    // Vehicle data members
    this->setModelName(veh1.getModelName());
    this->setDescription(veh1.getDescription());
    this->setVehicleColour(veh1.getVehicleColour());
    this->setYear(veh1.getYear());
    this->setSeats(veh1.getSeats());
    this->setVehicleManu(veh1.getVehicleManu());

    //Land Vehicle data members
    this->setTransmission(veh1.getTransmission());
    this->setDoors(veh1.getDoors());
    this->setMilage(veh1.getMileage());
}
