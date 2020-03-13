#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;

class Menu
{
     public:
        Menu(const string name, Menu *parent=nullptr);
        Menu* getChild(int i) {return children[i];}
        void displayMenu();
        
     private:
          vector<Menu *> children;
          const string name;
        
};
#endif