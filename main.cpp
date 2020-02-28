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

    v1.displayVehicleDetails();


}
