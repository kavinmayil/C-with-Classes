#include <iostream>
using namespace std;
class vaccine
{
    public:
        virtual void putvaccine(){
          cout<<"Covid Vaccine"<<endl;
      }
};
class covaxin:public vaccine
{
    public:
        void putvaccine(){
          cout<<"Put covaxin vaccine"<<endl;
      }
};
class covishield:public vaccine
{
    public:
        void putvaccine(){
          cout<<"Put Covishield vaccine"<<endl;
      }
};
int main()
{
   covaxin cx;
   covishield cs;
   vaccine *o=NULL;
   o=&cx;
   o->putvaccine();
   o=&cs;
   o->putvaccine();
    return 0;
}





