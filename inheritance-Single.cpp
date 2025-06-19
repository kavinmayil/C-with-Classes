#include <iostream>
using namespace std;
//Base class
class father
{
    public:
      void house(){
          cout<<"Have Own 2BHK House."<<endl;
      }
};
// Derived class
class son:public father
{
    public:
      void car(){
          cout<<"Have Own Audi Car."<<endl;
      }
    
};
int main(){
    son o;
    o.house();
    o.car();
    return 0;
}
