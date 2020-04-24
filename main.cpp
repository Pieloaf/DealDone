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

using namespace std;

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

    int controller = 0;

    while(controller == 0){
        cout << LRED <<"              i X z X Y m X X n          " << endl;
        cout << "            + ^         |       \\        " << endl;
        cout << "      `  c 1 (          x       + c i     " << endl;
        cout << "  / $ $ $ $ $ $ & $ $ m # $ $ $ $ $ $ * J " << endl;
        cout << "O $ $ % # * @ $ & $ $ $ & $ @ M # B $ $ $ " << endl;
        cout << "# $ $ * d h o $ & $ $ $ & $ * k b o $ $ $ " << endl;
        cout << "; U U #     k Y X X X z z c h     o n n x " << endl;
        cout << "      ^ a a                 ^ a o  " << endl;

        cout<< FST_BLINK << LBLUE <<"\n===== Welcome to DealDone Vehicle Sales =====\n" << GO_AWAY << endl << endl;
        cout << "Enter one of the following to navigate the programme" << endl;
        cout << "1 - View Code Requirements for Part 1" << endl;
        cout << "2 - View Code Requirements for Part 2" << endl;
        cin >> controller;
    }

    while(controller == 1){
        system("clear"); // clear screen linux
            //system("cls"); // clear screen windows
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
        
        cout << "\n======================================================================="<<endl;
        cout << "Enter one of the following to navigate the programme" << endl;
        cout << "0 - Return to Main Menu" << endl;
        cout << "2 - View Code Requirements for Part 2" << endl;
        cout << "3 - Exit" << endl << "Input:";
        cin >> controller;
    }
    while(controller == 2){
    //cout << "======================================================================="<<endl;
    ///// Part 2
    {
        system("clear");
        cout << "\n======================================================================="<<endl;
        StoreManager s1("Mick", "Micks Motors");
        User u2("John");
        StoreManager s2(u2, "John's Motors");


        cout << "Constructing a Land_Vehicle Object..." << endl; 
        Land_Vehicle v1;

        cout << "Default constructor used to create vehicle object, v1" << endl;
        v1.displayVehicleBasics();

        cout << "Vehicle is unnamed and has defualt manufacturer until set" << endl;

        v1.getVehicleManu()->setName("Toyota");
        v1.setModelName("Yaris");

        v1.displayVehicleBasics();
        cout << "Mutator used to set manufacturer and model names" << endl;

        cout << "Constructing an Air_Vehicle Object and Manufacturer Object..." << endl; 
        Manufacturer* m1 = new Manufacturer("test");
        Land_Vehicle v2(m1);
        cout << v2.getYear();

        v2.displayVehicleBasics();
        cout << "Vehicle was constructed with " << B_BLUE << "overloaded constructer" << B_NOCOL << " by passing in the manufacturer object" << endl;

        v2.setModelName("747");
        cout << "Only the model name had to be set" << endl;

        cout << "\nBoth Vehicle object, v1 and v2 were added to the listed vehicles object of the Store Manager object s1" << endl;
        s1.addListedVehicle(&v1);
        s1.addListedVehicle(&v2);
        s1.displayListedVehicles();
        cout << "Now displaying full vehicle details";
        cout << "\n===========\nv1 Details:\n";
        s1.getListedVehicle(0)->displayVehicleDetails();
        cout << "\n===========\nv2 Details:\n";
        s1.getListedVehicle(1)->displayVehicleDetails();

        cout << "\n\nNote: The displayVehicleDetails function for both Land and Air Vehicles are both " << B_BLUE << "overridden" << B_NOCOL << " from the parent Vehicle Class so as too avoid repeated code between the two classes"<<endl; 
        cout << "Note: Both function overriding and overloading are types of " << B_BLUE << "polymorophic functions" << B_NOCOL << endl;
        
        cout << "0 - Return to Main Menu" << endl;
        cout << "2 - View Code Requirements for Part 1" << endl;
        cout << "3 - Exit" << endl << "Input:";
        cin >> controller;
        }
    }
}
