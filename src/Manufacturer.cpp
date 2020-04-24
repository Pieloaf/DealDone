#include "Manufacturer.h"

Manufacturer::Manufacturer() // default constructor
{
    // setting default values
    name = "Unnamed Manufacturer";
    product_type = "Undefined Product Type";
}

Manufacturer::Manufacturer(string n){ // user defined contrustor to add a name
    // setting default values
    name = n;
    product_type = "Undefined Product Type";
}

Manufacturer::Manufacturer(string n, string t){ // user defined contrustor to add a name and type
    name = n;
    product_type = t;
}
Manufacturer::~Manufacturer()
{
    //dtor
}

void Manufacturer::addColour(string colour_name){ // adds an offered colour to the colour vector
    colour_list.push_back(colour_name);
}

void Manufacturer::removeColour(string colour_name){

    for(int i = 0; i < int(colour_list.size()); i++){ // runs through the whole vector to find the collour
        if (colour_list[i] == colour_name){ // checks that the colours match
            colour_list.erase(colour_list.begin() + i); // deletes the colour
        }
    }
}

void Manufacturer::listColours(){
    for(int i = 0; i < int(colour_list.size()); i++){ // runs through the vector to output the colours
        cout << colour_list[i] << endl;
    }
}

void Manufacturer::manuDetails(){ // ouputs manufacturer info into the console
    cout << "Manufacturer: " << name << endl;
    cout << "Products: " << product_type << endl;
    cout << "Colours:" << endl;
    Manufacturer::listColours(); // lists all the offered colours
}

void Manufacturer::operator= (Manufacturer& m1){ // acts as a "true equals" for manufacturer objects
    /// Sets the various data members of the selected object to that of the other object
    // Manufacturer Data members
    this->setName(m1.getName());
    this->setProductType(m1.getProductType());
    this->setColour_List(m1.getColour_List());
}

bool operator== (Manufacturer m1, Manufacturer m2){

    if(m1.getColour_List().size() == m2.getColour_List().size()){ // initially checks if the two vectors are the same size as if they aren't the manufacturers arent the same.
        if (m1.getColour_List() == m2.getColour_List()){ // then checks if the two vectors are the same
            return(m1.getName() == m2.getName() && m1.getProductType() == m2.getProductType()); // returns the "and" operation of the other data members
        }
        else{
            vector <string> m1_col = m1.getColour_List(); // clones the vectors as to allow vector comparison
            vector <string> m2_col = m2.getColour_List();
            string tested_col;

            for(int i = 0; i < int(m1_col.size()); i++){ // runs through one vector
                tested_col = m1_col[i]; // stores the colour for comparison

                for(int j = 0; j < int(m2_col.size()); j++){ // runs through the other vector
                    if(tested_col == m2_col[j]){ // if the tested colour is found in thhe other vector
                        m2_col.erase(m2_col.begin() + j); // erases it from the inner vector and breaks
                        break;
                    }
                }
            }
            if(m2_col.size() == 0) // if all colours were equal in the inner vector (e.g. all of them matched)
            {
                return(m1.getName() == m2.getName() && m1.getProductType() == m2.getProductType()); // returns the "and" operation of the other data members
            }
            else return false; // if a colour was not the same
        }
    }

    else return false; // return false if the two vectors are of different lengths as they cant be equal then
}
bool operator!= (Manufacturer m1, Manufacturer m2){ // returns the opposite of the == operator
    return !(m1 == m2);
}
