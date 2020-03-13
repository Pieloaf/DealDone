#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Menu.h"
#include "Air_Vehicle.h"
#include "Land_Vehicle.h"
#include "Manufacturer.h"
#include "User.h"
#include "StoreManager.h"

using namespace std;
void signup(string usr, string pswd);

int main()
{
    Menu mainMenu("Main Menu");
    Menu sub1("sub1", &mainMenu);
    Menu sub2("sub2", &mainMenu);
    Menu subsub("subtomyyt", &sub1);
    Menu* currentMenu = &mainMenu;


    cout << "              i X z X Y m X X n          " << endl;
    cout << "            + ^         |       \\        " << endl;
    cout << "      `  c 1 (          x       + c i     " << endl;
    cout << "  / $ $ $ $ $ $ & $ $ m # $ $ $ $ $ $ * J " << endl;
    cout << "O $ $ % # * @ $ & $ $ $ & $ @ M # B $ $ $ " << endl;
    cout << "# $ $ * d h o $ & $ $ $ & $ * k b o $ $ $ " << endl;
    cout << "; U U #     k Y X X X z z c h     o n n x " << endl;
    cout << "      ^ a a                 ^ a o  " << endl;
    
    cout<< "\n===== Welcome to DealDone Motor Sales =====\n" << endl;

    while(int hold = 1)
    {   currentMenu->displayMenu();
        string opt;
        cin >> opt;

        switch(opt[0])
        {
        case '1':
            cout << "ting";
            currentMenu = currentMenu->getChild(1);
            break;
        case '2':
            cout << "yeah";
            currentMenu = currentMenu->getChild(2);
        default:
            break;
        }
    }

    /*Manufacturer m1("Soyota");
    m1.addColour("blue");
    m1.addColour("red");
    m1.addColour("green");
    m1.addColour("yellow");
    
    signup("etc","123");

    Air_Vehicle v1(m1);
    v1.setModel_Name("Auris");
    Land_Vehicle v2(m1);
    v2.setModel_Name("Avensis");

<<<<<<< HEAD
    //v1.displayVehicleDetails();
=======
    v2.displayVehicleBasics();
>>>>>>> origin/master

    StoreManager s1("John", "John's Motors");
    s1.addVehicle(&v1);
    s1.addVehicle(&v2);

    s1.displayListedVehicles();
    int i;
    cin >> i;
    s1.removeVehicle(i);
    s1.displayListedVehicles();
    cout << s1.getName();

    User u1("Paul");
    u1.buy(&v1);
    u1.buy(&v2);
    u1.myVehicles();
    u1.listDetails();*/

}


void signup(string usr, string pswd)
{
    ofstream unameDB;
    unameDB.open("uname.db");
    unameDB << usr << endl;
    unameDB.close();

}

void signin(string usr, string pswd)
{
    
}

