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
    
        //Creating User Objects
        User u1;        //default constructor
        User u2("John");//overloaded constructor
        
        cout <<"User object, u1, contructed with no username passed to the constructor:\n" << CYAN << u1 << endl;
        cout << NOCOL << "User object, u2, constructed using an "<< B_BLUE <<"overloaded constructor"<< B_NOCOL <<" , with a username passed through as string:\n"<< CYAN << u2 <<endl;
        cout << NOCOL << "Note: With the username being a " << B_BLUE << "constant"<< B_NOCOL << " string , it was set through the use of an "<<B_BLUE<< "initialisation list" << B_NOCOL << endl;
        cout << "Note: cout of user object was done using an " << B_BLUE << "overloaded << operator" << B_NOCOL << endl;

        cout << "\n======================================================================="<<endl;

        cout << "\nCreating a Store Manager Object..." << endl;

        //creating Store Mangager objects
        StoreManager s1("Mick", "Micks Motors");
        cout << CYAN << s1 << NOCOL; //overloaded constructor
        cout << "\nAfter creating a Store Manger object, s1, the " << B_BLUE << "static variable" << B_NOCOL << " numStores is incremented.\n" << PURP << "Number of Store: " << s1.getNumStores() << NOCOL << endl;

        cout << "\nCreating another Store Manager Object..." << endl;
        StoreManager s2(u2, "John's Motors");
        cout << CYAN << s2 << NOCOL; //overloaded constructor
        cout << "\nCreating a second Store Manager object, s2, the static variable numStores is incremented again\n" << PURP << "Number of Stores: "  << s2.getNumStores() << endl;

        cout << NOCOL << "\nNote: s2 was constructed from the previously constructed user, u2, using an " << B_BLUE << "overloaded constructor" << B_NOCOL << " to \"convert\" a User object to Store Manager" << endl;
        
        cout << "\n======================================================================="<<endl;
        cout << "Enter one of the following to navigate the programme" << endl;
        cout << "0 - Return to Main Menu" << endl;
        cout << "2 - View Code Requirements for Part 2" << endl;
        cout << "3 - Exit" << endl << "Input:";
        cin >> controller;
    }
    while(controller == 2)
    {
        system("clear");
        cout << "\n======================================================================="<<endl;

        cout << BOLD << "Virtual and Polymorphic Functions" << GO_AWAY << endl << endl;

        //re-creating a Store Manger object as the first two are no longer callable after going out of scope since exiting the while loop
        StoreManager s1("Mick", "Micks Motors");

        //constructing a Land_Vehicle object
        Land_Vehicle v1;    //default constructor
        cout << "\nSome Notes on the Vehicle Destrcutor: Each vehicle object " << B_BLUE << "is destroyed" << B_NOCOL << " after the main is exited. The " << B_BLUE << "destructor" << B_NOCOL << " calls the " << B_BLUE << "delete" << B_NOCOL << " key word on the " << B_BLUE << "vehicle_manu pointer to free the memory" << B_NOCOL << ", to prevent a memory leak" << endl;
        cout << "The vehicle_manu pointer is then set to 0 to " << B_BLUE << "avoid any dangling pointers" << B_NOCOL << endl;
        cout << "These steps need to be taken in the destructor as the default Vehicle constructor uses the new key word to dynamically create a Manufacturer object\n" << endl;

        cout << "Default constructor used to create vehicle object, v1" << endl;
        cout << "Note: The display function used below is "<< B_BLUE << "overridden"<< B_NOCOL <<" from its parent Vehicle class where it is a "<< B_BLUE << "fully virtual function\n"<< B_NOCOL << endl;
        v1.displayVehicleBasics(); //short display function

        cout << "\nNote: Using the default constructor the Vehicle object only has default values until set" << endl;
        cout << "Note: Vehicle object mutators were used to set manufacturer, model name, price, year and mileage as seen below:\n" << endl;

        v1.getVehicleManu()->setName("Toyota"); //setting vehicle manufacturer name Note: -> needs to be used in place of . because getVehicleManu() returns a Manufacturer pointer 
        v1.setModelName("Yaris");
        v1.setMilage(20000); 
        v1.setYear(2015); 
        v1.setPrice(10000);

        
        v1.displayVehicleBasics(); //short display function

        cout << endl; 
        Manufacturer* m1 = new Manufacturer("Boewing"); //dynamically creating a Manufacturer object. Deleted in the Vehicle Destuctor on going out of scope
        Air_Vehicle v2(m1); //overloaded constructor, passing in manufacturer pointer

        cout << "Note: Again the display function used below is "<< B_BLUE << "overridden"<< B_NOCOL <<" from its parent Vehicle class where it is a "<< B_BLUE << "fully virtual function\n"<< B_NOCOL << endl;
        cout << "The information displayed differs from that of the same function used in the Land_Vehicle class. The displayVehicleBasics function is "<< B_BLUE << "polymorphic" << B_NOCOL << endl;


        v2.displayVehicleBasics(); //short display function
        cout << "\nNote: The second Vehicle object was constructed with " << B_BLUE << "overloaded constructer" << B_NOCOL << " by passing in the manufacturer pointer" << endl;

        v2.setModelName("747"); //setting model name
        v2.setPrice(30000000);
        v2.setYear(2008);
        v2.setMaxAirSpeed(900);
        cout << "Note: This time the Manufacturer did not need to be set using a mutator" << endl;

        cout << "Both Vehicle object, v1 and v2 were added to the listed vehicles object of the Store Manager object s1" << endl;
        //adding both vehicle objects to the listedVheicles vector of StoreManger object
        s1.addListedVehicle(&v1);
        s1.addListedVehicle(&v2);

        cout << "" << endl;
        s1.displayListedVehicles(); //calls the short display function for each object in listedVehicles vector
        cout << "\nNow displaying full vehicle details";
        cout << "\n===========\nv1 Details:\n";
        s1.getListedVehicle(0)->displayVehicleDetails(); //calling the long display function for the first Vehicle object in listedVehicles vector for s1
        cout << "\n===========\nv2 Details:\n";
        s1.getListedVehicle(1)->displayVehicleDetails(); //calling the long display function for the second Vehicle object in listedVehicles vector for s1


        cout << "\n\nNote: The displayVehicleDetails function for both Land and Air Vehicles are both " << B_BLUE << "overridden" << B_NOCOL << " from the parent Vehicle Class so as too avoid repeated code between the two classes"<<endl; 
        cout << "Note: Both function overriding and overloading are types of " << B_BLUE << "polymorophic functions" << B_NOCOL << endl;

        cout << BOLD << "\nAssignment Operator" << GO_AWAY << endl << endl;

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
        cout << "1 - View Code Requirements for Part 1" << endl;
        cout << "3 - Exit" << endl << "Input:";
        cin >> controller;
    }
}
