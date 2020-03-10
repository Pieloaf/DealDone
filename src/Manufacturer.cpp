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

    for(int i = 0; i < colour_list.size(); i++){ // runs through the whole vector to find the collour
        if (colour_list[i] == colour_name){ // checks that the colours match
            colour_list.erase(colour_list.begin() + i); // deletes the colour
        }
    }
}

void Manufacturer::listColours(){
    for(int i = 0; i < colour_list.size(); i++){ // runs through the vector to output the colours
        cout << colour_list[i] << endl;
    }
}

void Manufacturer::manuDetails(){
    cout << "Manufacturer: " << name << endl;
    cout << "Colours:" << endl;
    Manufacturer::listColours();
}
