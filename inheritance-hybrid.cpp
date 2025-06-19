#include <iostream>
using namespace std;
//Base class
class grandfather
{
    public:
      void fishing(){
          cout<<"Learning Fishing."<<endl;
      }
};
class father:public grandfather
{
    public:
      void Cooking(){
          cout<<"Learning Cooking."<<endl;
      }
};
class mother
{
    public:
      void Chain(){
          cout<<"Gold."<<endl;
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
    o.Chain();
    return 0;
}
