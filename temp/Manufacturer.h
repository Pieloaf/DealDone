#ifndef MANUFACTURER_H
#define MANUFACTURER_H

#include <vector>
#include <string>
#include <iostream>

#include "Colours.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Manufacturer
{
    public:
        Manufacturer();
        virtual ~Manufacturer();

        // User Defined constructors
        Manufacturer(string n);
        Manufacturer(string n,string t);

        /// Function Declarations
        // Generated mutators and accessors
        string getName() { return name; }
        void setName(string val) { name = val; }

        string getProductType() { return product_type; }
        void setProductType(string val) { product_type = val; }

        // User Defined mutators and accessors
        void addColour(string colour);
        void removeColour(string colour);
        void setColour_List(vector<string> c){ colour_list = c; } // sets the colour vector
        vector<string> getColour_List() { return colour_list; } // returns all of the colour vector

        // User Defined Functions
        void listColours();
        void manuDetails();

        void operator= (Manufacturer& m1); // overloaded equals operator. It acts as a true equals and makes all the data members the same.
        // Friend Functions
        friend bool operator== (Manufacturer m1, Manufacturer m2);  // overloaded comparison operators, these will check that all the data members are equal/not equal
        friend bool operator!= (Manufacturer m1, Manufacturer m2);
    protected:

    private:
        /// Private Data Members

        // primitive data types
        string name;
        string product_type;

        // vectors
        vector<string> colour_list;
};

#endif // MANUFACTURER_H
