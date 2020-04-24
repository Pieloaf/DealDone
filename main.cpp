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

void step()
{
    cout << "Press Enter to Continue..." << endl;
    cin.ignore();
    system("clear");
}

int main()
{    
    system("clear");
    /// Splash Screen
    cout << LRED <<"              i X z X Y m X X n          " << endl;
    cout << "            + ^         |       \\        " << endl;
    cout << "      `  c 1 (          x       + c i     " << endl;
    cout << "  / $ $ $ $ $ $ & $ $ m # $ $ $ $ $ $ * J " << endl;
    cout << "O $ $ % # * @ $ & $ $ $ & $ @ M # B $ $ $ " << endl;
    cout << "# $ $ * d h o $ & $ $ $ & $ * k b o $ $ $ " << endl;
    cout << "; U U #     k Y X X X z z c h     o n n x " << endl;
    cout << "      ^ a a                 ^ a o  " << endl;

    cout<< FST_BLINK << LBLUE <<"\n===== Welcome to DealDone Vehicle Sales =====\n" << GO_AWAY << endl << endl;

    step();

    //system("cls"); // clear screen windows
    cout << "======================================================================="<<endl;
    cout << BOLD << "\nPart 1a -  Overloaded Constructor, Constructor Initialisation list and Constants" << GO_AWAY << endl << endl;


    //Creating User Objects
    User u1;        //default constructor
    User u2("John");//overloaded constructor
    
    cout <<"User object, u1, contructed with no username passed to the constructor:\n" << CYAN << u1 << endl;
    cout << NOCOL << "User object, u2, constructed using an "<< B_BLUE <<"overloaded constructor"<< B_NOCOL <<" , with a username passed through as string:\n"<< CYAN << u2 <<endl;
    cout << NOCOL << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << " With the username being a " << B_BLUE << "constant"<< B_NOCOL << " string , it was set through the use of an "<<B_BLUE<< "initialisation list" << B_NOCOL << endl;
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  cout of user object was done using an " << B_BLUE << "overloaded << operator" << B_NOCOL << endl;

    step();
    cout << "\n======================================================================="<<endl;
    cout << BOLD << "\nPart 1b - Static Variables" << GO_AWAY << endl << endl;

    cout << "\nCreating a Store Manager Object..." << endl;

    //creating Store Mangager objects
    StoreManager s1("Mick", "Micks Motors");
    cout << CYAN << s1 << NOCOL; //overloaded constructor
    cout << "\nAfter creating a Store Manger object, s1, the " << B_BLUE << "static variable" << B_NOCOL << " numStores is incremented.\n" << PURP << "Number of Store: " << s1.getNumStores() << NOCOL << endl;

    cout << "\nCreating another Store Manager Object..." << endl;
    StoreManager s2(u2, "John's Motors");
    cout << CYAN << s2 << NOCOL; //overloaded constructor
    cout << "\nCreating a second Store Manager object, s2, the static variable numStores is incremented again\n" << PURP << "Number of Stores: "  << s2.getNumStores() << endl;

    cout << B_WITE << BLK << "\nNote:" << B_NOCOL << NOCOL << " s2 was constructed from the previously constructed user, u2, using an " << B_BLUE << "overloaded constructor" << B_NOCOL << " to \"convert\" a User object to Store Manager" << endl;
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << " When a Vehicle is " << B_BLUE << "goes out of scope or is destructed" << B_NOCOL << " numStores is decremented" << endl;


    step();

    cout << "\n======================================================================="<<endl;

    cout << BOLD << "\nPart 1c & 2a - Function Overriding, Virtual and Polymorphic Functions and Destructors" << GO_AWAY << endl << endl;

    //constructing a Land_Vehicle object
    Land_Vehicle v1;    //default constructor

    cout << "\nSome Notes on the Vehicle Destrcutor: Each vehicle object " << B_BLUE << "is destructed after going out of scope" << B_NOCOL << ", the " << B_BLUE << "destructor" << B_NOCOL << " uses the " << B_BLUE << "delete" << B_NOCOL << " key word on the " << B_BLUE << "vehicle_manu pointer to free the memory" << B_NOCOL << ", to prevent a memory leak" << endl;
    cout << "The vehicle_manu pointer is then set to 0 to " << B_BLUE << "avoid any dangling pointers" << B_NOCOL << endl;
    cout << "These steps need to be taken in the destructor as the default Vehicle constructor uses the new key word to dynamically create a Manufacturer object\n" << endl;

    cout << "Default constructor used to create vehicle object, v1" << endl;
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  The display function used below is "<< B_BLUE << "overridden"<< B_NOCOL <<" from its parent Vehicle class where it is a "<< B_BLUE << "fully virtual function\n"<< B_NOCOL << endl;
    v1.displayVehicleBasics(); //short display function

    cout << endl << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << " Using the default constructor the Vehicle object only has default values until set" << endl;
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  Vehicle object mutators were used to set manufacturer, model name, price, year and mileage as seen below:\n" << endl;

    v1.getVehicleManu()->setName("Toyota"); //setting vehicle manufacturer name Note: -> needs to be used in place of . because getVehicleManu() returns a Manufacturer pointer 
    v1.setModelName("Yaris");
    v1.setMilage(20000); 
    v1.setYear(2015); 
    v1.setPrice(10000);

    
    v1.displayVehicleBasics(); //short display function

    cout << endl; 
    Manufacturer* m1 = new Manufacturer("Boeing"); //dynamically creating a Manufacturer object. Deleted in the Vehicle Destuctor on going out of scope
    Air_Vehicle v2(m1); //overloaded constructor, passing in manufacturer pointer

    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  Again the display function used below is "<< B_BLUE << "overridden"<< B_NOCOL <<" from its parent Vehicle class where it is a "<< B_BLUE << "fully virtual function\n"<< B_NOCOL << endl;
    cout << "The information displayed differs from that of the same function used in the Land_Vehicle class. The displayVehicleBasics function is "<< B_BLUE << "polymorphic" << B_NOCOL << endl;


    v2.displayVehicleBasics(); //short display function
    cout << B_WITE << BLK << "\nNote:" << B_NOCOL << NOCOL << " The second Vehicle object was constructed with " << B_BLUE << "overloaded constructer" << B_NOCOL << " by passing in the manufacturer pointer" << endl;

    v2.setModelName("747"); //setting model name
    v2.setPrice(30000000);
    v2.setYear(2008);
    v2.setMaxAirSpeed(900);
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  This time the Manufacturer did not need to be set using a mutator" << endl;

    cout << "Both Vehicle object, v1 and v2 were added to the listed vehicles object of the Store Manager object s1" << endl;
    //adding both vehicle objects to the listedVheicles vector of StoreManger object
    s1.addListedVehicle(&v1);
    s1.addListedVehicle(&v2);

    cout << "A StoreManager function, displayListedVehicles, is used to print out all objects in listedVehicles vector" << endl;
    s1.displayListedVehicles(); //calls the short display function for each object in listedVehicles vector
    cout << "\nNow displaying full vehicle details (See: note below)";
    cout << "\n===========\nv1 Details:\n";
    s1.getListedVehicle(0)->displayVehicleDetails(); //calling the long display function for the first Vehicle object in listedVehicles vector for s1
    cout << "\n===========\nv2 Details:\n";
    s1.getListedVehicle(1)->displayVehicleDetails(); //calling the long display function for the second Vehicle object in listedVehicles vector for s1


    cout << B_WITE << BLK << "\n\nNote:" << B_NOCOL << NOCOL << " Both the displayVehicleBasics and displayVehicleDetails function for both Land and Air Vehicle objects are both " << B_BLUE << "overridden" << B_NOCOL << " from the parent Vehicle Class so as too avoid repeated code between the two classes"<<endl; 
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  Both function overriding and overloading are types of " << B_BLUE << "polymorophic functions" << B_NOCOL << endl;

    step();
    
    cout << "\n======================================================================="<<endl;

    cout << BOLD << "\nPart 2b - Overloaded Assignment Operator" << GO_AWAY << endl << endl;

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
    cout << B_WITE << BLK << "Note:" << B_NOCOL << NOCOL << "  The "<< B_BLUE << "assignment operation" << B_NOCOL <<" used for the Air_Vehicle also calls the ";
    cout << B_BLUE << "assignment operator" << B_NOCOL << " for the Manufacturer as the mutator uses it." << endl;

    step();
    /*///Part 3
    cout << BOLD << "Miscellaneous Function Testing" << GO_AWAY << endl;
    cout <<BOLD << RED << "NOTE: Some functions may not be shown in this section as they have previously been tested or were simply missed when coding." << GO_AWAY << endl;
    
    step();
    
    ///Manufacturer test
    cout << "======================================================================="<<endl;
    cout << BOLD << "Manufacturer test" << GO_AWAY << endl;
    // testing manufacturer functions
    Manufacturer* t_m1 = new Manufacturer();
    Manufacturer* t_m2 = new Manufacturer();

    // testing functions
    t_m1->setName("Boeing");
    t_m1->setProductType("Commerical Aircraft");
    t_m1->addColour("Red");
    t_m1->addColour("Blue");
    t_m1->addColour("Yellow");
    t_m1->removeColour("Yellow");
    cout << "Colours:" << endl;
    t_m1->listColours(); // only red and blue should print
    vector <string> v = t_m1->getColour_List();
    v.pop_back();
    t_m1->setColour_List(v);
    t_m1->manuDetails(); // only Red should print

    // testing operators
    t_m2 = t_m1;
    // outputs if operators and getters work
    if(t_m1 == t_m2 && !(t_m1 != t_m2)) cout << "if visible then getters, !=, == and = operators work" << endl;

    step();
    
    ///Vehicle and Child class testing
    cout << "======================================================================="<<endl;
    cout << BOLD << "Vehicle test" << GO_AWAY << endl;
    Air_Vehicle t_av1(t_m1);
    Air_Vehicle t_av2(t_m1);

    // testing Vehicle and Air_Vehicle setters
    t_av1.setModelName("747-500");
    t_av1.setSeats(500);
    t_av1.setVehicleColour("Blue");
    t_av1.setYear(1995);
    t_av1.setPrice(10000000);
    t_av1.setDescription("This is a Boeing 747.");
    t_av1.setMaxAirSpeed(1075);
    t_av1.setFlightHours(10000);

    t_av1.displayVehicleBasics(); // test basics

    t_av1 = t_av2; // = operator

    // outputs if getters and operators works
    if(t_av1 == t_av2 && !(t_av2 != t_av1)) cout <<"Ouputs if ==, !=, getters and = work\n" <<endl;

    t_av2.displayVehicleDetails(); // test details

    Land_Vehicle t_lv1;
    // test land vehicle settings
    t_lv1.setTransmission("Manual");
    t_lv1.setMilage(90000);
    t_lv1.setDoors(4);

    t_lv1.displayVehicleDetails(); // see if setters work

    step();
        
    ///User and Store Manager class testing
    cout << "======================================================================="<<endl;
    cout << BOLD << "User test" << GO_AWAY << endl;

    User t_us("John");

    StoreManager t_sm("Jake","test");
    t_sm.setStoreName("Jake's Store");
    t_sm.setDescription("This is a store");

    t_sm.addListedVehicle(&t_av1); // adding vehicles
    t_sm.addListedVehicle(&t_lv1);
    cout << "Listed Vehicle test:" << endl;

    t_sm.displayListedVehicles(); // see if vehicles were added

    if (t_lv1 == *t_sm.getListedVehicle(1)) cout << "if you can see this then get listed vehicle works" << endl;

    cout << "Testing sell funciton. John should have 1 owned vehicle and Jake should have 1 listed vehicle" << endl;
    t_sm.sellListedVehicle(t_us,t_sm.getListedVehicle(1)); // should remove listed vehicle and add it to the user
    t_sm.listDetails();
    t_us.listDetails();

    step();*/

    return 0;

}
