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
          void setStoreName( string val ){ storeName=val; }
          string getStoreName(){ return storeName; }

          void setDescription( string val ){ description=val; }
          string getDescription(){ return description; }
          
          // User Defined Accessors and Mutators
          void addVehicle(Vehicle* v){ listedVehicles.push_back(v); }
          void unlistVehicle(int i);

          // User Defined Functions
          void displayListedVehicles();
          void sell(User &u, Vehicle* v);
          void listDetails();
          int getNumStores(){return numStores;}
          Vehicle* getListedVehicle(int i){return listedVehicles[i];}

          friend ostream& operator<< (ostream&, const StoreManager&);

     protected:

     private:
          /// Data Members
          // primitive data types
          static int numStores;
          string storeName;
          string description;

          // vectors
          vector<Vehicle*> listedVehicles;

};
#endif
