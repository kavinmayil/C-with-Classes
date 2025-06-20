#include <iostream>
using namespace std;
//Protected Access Specifier
class A{
    protected:
      int x;
};
class B:public A
{
    public:
      void getDetails(){
          cout<<"\nEnter the value of X :";
          cin>>x;
      }
      void display(){
          cout<<"X :"<<x<<endl;
      }
};

int main()
{
    B o;
    o.getDetails();
    o.display();
    return 0;
}
