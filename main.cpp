#include <iostream>
#include <string>
#include <vector>

#include "Vehicle.h"
#include "Manufacturer.h"
#include "User.h"
#include "StoreManager.h"

using namespace std;

int main()
{
    Manufacturer m1("Soyota");
    m1.addColour("blue");
    m1.addColour("red");
    m1.addColour("green");
    m1.addColour("yellow");
    Vehicle v1(m1);
    v1.setModel_Name("Auris");
    Vehicle v2(m1);
    v2.setModel_Name("Avensis");

    v1.displayVehicleDetails();
    
    StoreManager s1("John", "John's Motors");
    s1.addVehicle(v1);
    s1.addVehicle(v2);

    s1.displayListedVehicles();
    int i;
    cin >> i;
    s1.removeVehicle(i);
    s1.displayListedVehicles();
    cout << s1.getName();

    User u1("Paul");
    u1.buy(v1);
    u1.buy(v2);
    u1.myVehicles();
    u1.listDetails();

}
