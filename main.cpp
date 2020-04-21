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
vector <Vehicle>  allVehicles;

*/int main()
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
    User u1;
   Manufacturer m1("Soyota");
    m1.addColour("blue");
    m1.addColour("red");
    m1.addColour("green");
    m1.addColour("yellow");

    Land_Vehicle v1;
    v1.setDescription("dsfs");
    v1.setModelName("car");
    //Air_Vehicle v2;
    //v1.displayVehicleDetails();
    //v2.displayVehicleDetails();
    //if(v1 != v2) cout << "yoi";

    StoreManager s1("John", "John's Motors");
    //User u1("Mary");

    u1.buy(&v1);
    cout << u1 <<"\n";

    //cout << "store 1" <<endl;
    s1.displayListedVehicles();
    cout << "-------------------" << endl;
    //cout << "user 1" <<endl;
    u1.myVehicles();

    s1.sell(u1, &v1);

    //cout << "store 2" <<endl;
    s1.displayListedVehicles();
    cout << "-------------------" << endl;
    //cout << "user 2" <<endl;
    u1.myVehicles();


    cout << "\n\n other stuff \n";
    int x = 5;
    int y =10;
    cout << x+y << endl;

/*    //signup("etc","123");

    //Menu Loop
    while(int hold = 1)
    {   
        //If a function can be executed from a menu, the menu needs to be made manually in the menuFunc function below
        if (currentMenu->hasFunc==true){menuFunc(currentMenu->name);}

        //Menu loop that will navigate up and down between menus
        else{
            currentMenu->displayMenu();
            int opt;
            cin >> opt;
            
            if (currentMenu->parent && opt == currentMenu->children.size()+1)
            {
                currentMenu = currentMenu->parent;
            }
            else
            {
                currentMenu = currentMenu->getChild(opt-1);
            }
        }
    }
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

void listall()
{
    for (int s=0; s<allVehicles.size(); s++)
    {
        cout << s << endl;
        cout << allVehicles[s];
    }
}

void menuFunc(string n)
{
    
    if (n == listAll.name)
    {
        int x;
        while(int hold=1)
        {
            listall();
            cin >> x;
            if(x==0)
            {
                currentMenu=currentMenu->parent;
                hold=0;
            }
            else 
            {
                cout << "is this it?"<< endl;
                //cout << stores[s].getStoreName();
            }
        return;
        }
    }
    else if (n == search.name)
    {
        string search;

        while (search != "0")
        {        
            cout << "Enter a search term: " << endl;
            cin >> search;
            cout << endl << search << endl;
            for (int s=0; s<allVehicles.size(); s++)
            {
                Vehicle a = allVehicles[s];

                if (search == a.getModel_Name() || search == a.getVehicleManuName())
                {
                    cout << endl << allVehicles[s] << endl;
                }
            }
        }
        currentMenu=currentMenu->parent;
    }*/
    return 0;
}