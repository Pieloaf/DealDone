#include "Manufacturer.h"

Manufacturer::Manufacturer()
{
    //ctor
}
Manufacturer::Manufacturer(string n){
    name = n;
}
Manufacturer::~Manufacturer()
{
    //dtor
}

void Manufacturer::addColour(string colour_name){
    colour_list.push_back(colour_name);
}

void Manufacturer::removeColour(string colour_name){

    for(int i = 0; i < int(colour_list.size()); i++){
        if (colour_list[i] == colour_name){
            colour_list.erase(colour_list.begin() + i);
        }
    }
}

void Manufacturer::listColours(){
    for(int i = 0; i < int(colour_list.size()); i++){
        cout << colour_list[i] << endl;
    }
}
