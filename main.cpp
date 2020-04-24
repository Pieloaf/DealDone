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
    int controller = 0;

    while(controller == 0){
        /// main menu
        cout << LRED <<"              i X z X Y m X X n          " << endl;
        cout << "            + ^         |       \\        " << endl;
        cout << "      `  c 1 (          x       + c i     " << endl;
        cout << "  / $ $ $ $ $ $ & $ $ m # $ $ $ $ $ $ * J " << endl;
        cout << "O $ $ % # * @ $ & $ $ $ & $ @ M # B $ $ $ " << endl;
        cout << "# $ $ * d h o $ & $ $ $ & $ * k b o $ $ $ " << endl;
        cout << "; U U #     k Y X X X z z c h     o n n x " << endl;
        cout << "      ^ a a                 ^ a o  " << endl;

        cout<< FST_BLINK << LBLUE <<"\n===== Welcome to DealDone Vehicle Sales =====\n" << GO_AWAY << endl << endl;

        // ouputting menu to tranverse programcout << "Enter one of the following to navigate the programme" << endl;
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
        cout << NOCOL << "Note: the Store Manager information is displayed using an " << B_BLUE << "overridden function" << B_NOCOL << " derivied from the overloaded operator<< in the parent User Class" << endl;

        // ouputting menu to tranverse program
        cout << "\n======================================================================="<<endl;
        cout << "Enter one of the following to navigate the programme" << endl;
        cout << "0 - Return to Main Menu" << endl;
        cout << "2 - View Code Requirements for Part 2" << endl;
        cout << "3 - Exit" << endl << "Input:";
        cin >> controller;
    }
    while(controller == 2){
        system("clear"); // clear screen linux
        //system("cls"); // clear screen windows

        cout << "======================================================================="<<endl;
        cout << BOLD << "Assignment Operator" << GO_AWAY << endl << endl;

        cout << "Creating two differement Air_Vehicles..." << endl;

        // creating two  manufacturers
        Manufacturer* assignment_m1 = new Manufacturer("Boeing","Commerical Aircraft");
        Manufacturer* assignment_m2 = new Manufacturer("Airbus","Commercial Aircraft");
        // creating vehicle 1
        Air_Vehicle assignment_v1(assignment_m1);
        // setters to ensure they are different
        assignment_v1.setModelName("747-500");
        assignment_v1.setSeats(500);
        assignment_v1.setVehicleColour("Blue");
        assignment_v1.setYear(1995);
        assignment_v1.setPrice(10000000);
        assignment_v1.setDescription("This is a Boeing 747.");
        assignment_v1.setMaxAirSpeed(1075);
        assignment_v1.setFlightHours(10000);

        // creating vehicle 2
        Air_Vehicle assignment_v2(assignment_m2);
        // setters to ensure they are different
        assignment_v2.setModelName("A380");
        assignment_v2.setSeats(525);
        assignment_v2.setVehicleColour("RED");
        assignment_v2.setYear(2010);
        assignment_v2.setPrice(30000000);
        assignment_v2.setDescription("This is an Airbus A3802.");
        assignment_v2.setMaxAirSpeed(1020);
        assignment_v2.setFlightHours(5000);

        // outputing data to show the differences
        cout <<"\nAir Vehicle 1:" << endl;
        assignment_v1.displayVehicleDetails();
        cout << "\nAir Vehicle 2:" << endl;
        assignment_v2.displayVehicleDetails();

        cout << "As seen above, these two Air_Vehicle objects are different." << endl;
        cout << "\nProcessing Assignment Operation..." << endl;

        assignment_v2 = assignment_v1; // assignment operator

        // outputting data to show they are the same
        cout <<"\nAir Vehicle 1:" << endl;
        assignment_v1.displayVehicleDetails();
        cout << "\nAir Vehicle 2:" << endl;
        assignment_v2.displayVehicleDetails();

        // outputting description of operation
        cout << "\nAfter the " << B_BLUE << "assignment operation" << B_NOCOL << ", the two Air_Vehicles objects are now equal." << endl;
        cout << "Note: The "<< B_BLUE << "assignment operation" << B_NOCOL <<" used for the Air_Vehicle also calls the ";
        cout << B_BLUE << "assignment operator" << B_NOCOL << " for the Manufacturer as the mutator uses it." << endl;

        // ouputting menu to tranverse program
        cout << "\n======================================================================="<<endl;
        cout << "Enter one of the following to navigate the programme" << endl;
        cout << "0 - Return to Main Menu" << endl;
        cout << "2 - View Code Requirements for Part 2" << endl;
        cout << "3 - Exit" << endl << "Input:";
        cin >> controller;

    }
}
