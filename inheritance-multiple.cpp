#include <iostream>
using namespace std;
//Base class
class father
{
    public:
      void fishing(){
          cout<<"Learning Fishing."<<endl;
      }
};
class mother
{
    public:
      void Cooking(){
          cout<<"Learning Cooking."<<endl;
      }
};
// Derived class
class son:public father,public mother
{
    public:
      void cooding(){
          cout<<"Learn Cooding."<<endl;
      }
    
};
int main(){
    son o;
    o.fishing();
    o.Cooking();
    o.cooding();
    return 0;
}
