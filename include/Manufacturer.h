#ifndef MANUFACTURER_H
#define MANUFACTURER_H

#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Manufacturer
{
    public:
        Manufacturer();
        Manufacturer(string n);
        virtual ~Manufacturer();

        // Generated mutators and accessors
        string getName() { return name; }
        void setName(string val) { name = val; }
        string getProductType() { return product_type; }
        void setProductType(string val) { product_type = val; }

        // Custom Functions
        void addColour(string colour);
        void removeColour(string colour);

        void listColours();

    protected:

    private:
        string name;
        string product_type;
        vector<string> colour_list;
};

#endif // MANUFACTURER_H
