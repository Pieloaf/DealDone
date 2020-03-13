#include "Menu.h"
Menu::Menu(const string name, bool x, Menu *parent) : name(name),  hasFunc(x), parent(parent)
{
    if (parent)
    {
        int i = -1;
        std::cout << parent->children.size() << name << std::endl;
        parent->children.push_back(this);   
    }
}

void Menu::displayMenu()
{
    std::cout << name << std::endl;
    for (int i=0; i<children.size(); i++)
    {
        std::cout << i+1 << ". " << children[i]->name << std::endl;
    }
    if (parent)
    {
        std::cout << children.size()+1 << ". " << parent->name << std::endl;
    }
}

