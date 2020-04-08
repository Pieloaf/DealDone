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
    cout << "Products: " << product_type << endl;
    cout << "Colours:" << endl;
    Manufacturer::listColours();
}


bool operator== (Manufacturer m1, Manufacturer m2){

    if(m1.getColour_List().size() == m2.getColour_List().size()){
        if (m1.getColour_List() == m2.getColour_List()){
            return(m1.getName() == m2.getName() && m1.getProductType() == m2.getProductType());
        }
        else{
            vector <string> m1_col = m1.getColour_List();
            vector <string> m2_col = m2.getColour_List();
            string tested_col;

            for(int i = 0; i < m1_col.size(); i++){
                tested_col = m1_col[i];

                for(int j = 0; j < m2_col.size(); j++){
                    if(tested_col == m2_col[j]){
                        m2_col.erase(m2_col.begin() + j);
                        break;
                    }
                }
            }
            if(m2_col.size() == 0)
            {
                return(m1.getName() == m2.getName() && m1.getProductType() == m2.getProductType());
            }
            else return false;
        }
    }

    else return false;
}
bool operator!= (Manufacturer m1, Manufacturer m2){
    return !(m1 == m2);
}
