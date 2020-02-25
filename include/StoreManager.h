#ifndef STOREMANAGER_H
#define STOREMANAGER_H
class StoreManager : public User
{
   public:
        StoreManager();
        virtual ~StoreManager();
        void setlistedVehicles( val=vector<Vehicle> ){ listedVehicles=val; }
        vector<Vehicle> getlistedVehicles(){ return listedVehicles; }
        void setstore_name( val=std::string ){ store_name=val; }
        std::string getstore_name(){ return store_name; }
        void setdescription( val=std::string ){ description=val; }
        std::string getdescription(){ return description; }
   protected:
   private:
        vector<Vehicle> listedVehicles;
        std::string store_name;
        std::string description;
};
#endif