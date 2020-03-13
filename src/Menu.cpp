#include "Menu.h"
Menu::Menu(const string name, Menu *parent) : name(name)
{
    if (parent)
    {
        parent->children.push_back(this);
    }
}

void Menu::displayMenu()
{
    for (int i=0; i<children.size(); i++)
    {
        std::cout << getChild(i)->name;
    }
}