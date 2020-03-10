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

        /// Function Declarations
        // Generated mutators and accessors
        string getName() { return name; }
        void setName(string val) { name = val; }
        string getProductType() { return product_type; }
        void setProductType(string val) { product_type = val; }

        // User Defined mutators and accessors
        void addColour(string colour);
        void removeColour(string colour);

        // User Defined Functions
        void listColours();
        void manuDetails();



    protected:

    private:
        /// Variables

        // Default Data types
        string name;
        string product_type;

        // vectors
        vector<string> colour_list;
};

#endif // MANUFACTURER_H
