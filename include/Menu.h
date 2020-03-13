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
      
      bool hasFunc = false;
      Menu(const string name, bool x, Menu *parent=nullptr);
      Menu* getChild(int i) {return children[i];}
      void displayMenu();

      vector<Menu *> children;
      Menu* parent; 
      const string name;
        
};
#endif