#ifndef STOREMANAGER_H
#define STOREMANAGER_H

#include <User.h>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class StoreManager : public User
{
     public:
          // default constructors
          virtual ~StoreManager();
          //user defined constructors
          StoreManager(string uname, string sname);
          StoreManager(User u, string sname);

          /// Function Declarations
          // Generated Accessors and Mutators
          void setStoreName( string val ){ store_name = val; }
          string getStoreName(){ return store_name; }

          void setDescription( string val ){ description = val; }
          string getDescription(){ return description; }

          int getNumStores(){ return num_stores; }

          // User Defined Accessors and Mutators
          void addListedVehicle(Vehicle* v){ listed_vehicles.push_back(v); }
          void unlistVehicle(int i);

          // User Defined Functions
          void displayListedVehicles(); // Displays all the vehicles for sale
          void sellListedVehicle(User &u, Vehicle* v); // Removes a listed vehicle and adds it to the user's owned vehicles
          void listDetails(); // outputs all objects data into the terminal
          Vehicle* getListedVehicle(int i){return listed_vehicles[i];}

          friend ostream& operator<< (ostream&, const StoreManager&);

     protected:

     private:
          /// Data Members
          // primitive data types
          static int num_stores;
          string store_name;
          string description;

          // vectors
          vector<Vehicle*> listed_vehicles;

};
#endif
