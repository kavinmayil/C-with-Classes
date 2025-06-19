#include <iostream>
using namespace std;
class A
{
    public:
      void display(){
          cout<<"Display Method"<<endl;
      }
};
class B:virtual public A
{
    public:
      void show(){
        cout<<"show method in B";
      }
};
class C:virtual public A
{
    
};
class D:public B,public C
{
    
};
int main(){
    D o;
    o.display();
    return 0;
}
