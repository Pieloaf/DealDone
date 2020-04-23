#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Vehicle.h"
#include "Air_Vehicle.h"
#include "Land_Vehicle.h"
#include "Manufacturer.h"
#include "User.h"
#include "StoreManager.h"

int main()
{


    /*cout << "              i X z X Y m X X n          " << endl;
    cout << "            + ^         |       \\        " << endl;
    cout << "      `  c 1 (          x       + c i     " << endl;
    cout << "  / $ $ $ $ $ $ & $ $ m # $ $ $ $ $ $ * J " << endl;
    cout << "O $ $ % # * @ $ & $ $ $ & $ @ M # B $ $ $ " << endl;
    cout << "# $ $ * d h o $ & $ $ $ & $ * k b o $ $ $ " << endl;
    cout << "; U U #     k Y X X X z z c h     o n n x " << endl;
    cout << "      ^ a a                 ^ a o  " << endl;
*/  
    cout << "======================================================================="<<endl;
    
    User u1;
    User u2("John");
    
    cout <<"User object, u1, contructed with no username passed to the constructor:\n" << CYAN << u1 << endl;
    cout << NOCOL << "User object, u2, constructed using an "<< B_BLUE <<"overloaded constructor"<< B_NOCOL <<" , with a username passed through as string:\n"<< CYAN << u2 <<endl;
    cout << NOCOL << "Note: With the username being a " << B_BLUE << "constant"<< B_NOCOL << " string , it was set through the use of an "<<B_BLUE<< "initialisation list" << B_NOCOL << endl;
    cout << "Note: cout of user object was done using an " << B_BLUE << "overloaded << operator" << B_NOCOL << endl;

    cout << "\n======================================================================="<<endl;

    cout << "\nCreating a Store Manager Object..." << endl;
    StoreManager s1("Mick", "Micks Motors");
    cout << CYAN << s1 << NOCOL;
    cout << "\nAfter creating a Store Manger object, s1, the " << B_BLUE << "static variable" << B_NOCOL << " numStores is incremented.\n" << PURP << "Number of Store: " << s1.getNumStores() << NOCOL << endl;

    cout << "\nCreating another Store Manager Object..." << endl;
    StoreManager s2(u2, "John's Motors");
    cout << CYAN << s2 << NOCOL;
    cout << "\nCreating a second Store Manager object, s2, the static variable numStores is incremented again\n" << PURP << "Number of Stores: "  << s2.getNumStores() << endl;

    cout << NOCOL << "\nNote: s2 was constructed from the previously constructed user, u2, using an " << B_BLUE << "overloaded constructor" << B_NOCOL << " to \"convert\" a User object to Store Manager" << endl;
    cout << NOCOL << "Note: the Store Manager information is displayed using an " << B_BLUE << "overridden function" << B_NOCOL << " derivied from the overloaded operator<< in the parent User Class" << endl;
    


    cout << "\n======================================================================="<<endl;

    Land_Vehicle v1;

    v1.getVehicleManu()->setName("Toyota");
    v1.setModelName("Yaris");

    Air_Vehicle v2;

    v2.getVehicleManu()->setName("Boewing");
    v2.setModelName("747");

    s1.addListedVehicle(&v1);
    s1.addListedVehicle(&v2);
    cout << "\n===========\nv1 Details:\n";
    s1.getListedVehicle(0)->displayVehicleDetails();
    cout << "\n===========\nv2 Details:\n";
    s1.getListedVehicle(1)->displayVehicleDetails();

    cout << "\n\nNote: The displayVehicleDetails function for both Land and Air Vehicles are both " << B_BLUE << "overloaded" << B_NOCOL << " from the parent Vehicle Class so as too avoid repeated code between the two classes"<<endl; 


}
