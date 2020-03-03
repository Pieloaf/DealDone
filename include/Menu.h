#ifndef MENU_H
#define MENU_H
class Menu
{
   public:
        Menu();
        virtual ~Menu();
        void setoptions( vector<string> val ){ options=val; }
        vector<string> getoptions(){ return options; }
        void setfunc( vector<string> val ){ func=val; }
        vector<string> getfunc(){ return func; }
   protected:
   private:
        vector<string> options;
        vector<string> func;
};
#endif