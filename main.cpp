#include <iostream>
#include <string>
#include <vector>
#include <fstream>

//#include "Menu.h"
#include "Vehicle.h"
#include "Air_Vehicle.h"
#include "Land_Vehicle.h"
#include "Manufacturer.h"
#include "User.h"
#include "StoreManager.h"

using namespace std;
void signup(string usr, string pswd);
void menuFunc(string n);

/*Menu mainMenu("Main Menu", false);
Menu search("Search", true, &mainMenu);
Menu browse("Browse", false, &mainMenu);
Menu listAll("All Vehicles", true, &browse);
Menu myAccount("My Account", false, &mainMenu);
Menu* currentMenu = &mainMenu;
StoreManager s1("John", "John's Motors");
StoreManager s2("Mark", "Mark's Motors");
vector <Vehicle>  allVehicles;*/

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

    cout<< "\n===== Welcome to DealDone Motor Sales =====\n" << endl;
*/

    Air_Vehicle v1;
    Air_Vehicle v2;

    v1.setModelName("Jet1");
    v2.setModelName("Jet2");
    v1.setFlightHours(100);
    v2.setFlightHours(20);
    v2.displayVehicleBasics();
    v1.displayVehicleBasics();
    v2 = v1;
    v2.displayVehicleBasics();
    return 0;
}
