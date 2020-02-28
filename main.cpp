#include <iostream>
#include <string>
#include <vector>

#include "Vehicle.h"
#include "Manufacturer.h"
<<<<<<< HEAD
#include "User.h"
#include "StoreManager.h"
=======
>>>>>>> e8fff7b17445cd6dbca89b98d0423736b868d371

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
