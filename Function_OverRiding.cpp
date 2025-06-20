#include <iostream>
using namespace std;
class base
{
    protected:
      int a,b;
    public:
      void add(){
          cout<<"\nEnter 2 nos :";
          cin>>a>>b;
          cout<<"Total  :"<<a+b<<endl;
      }
};
class derive:public base
{
    private:
      int c;
    public:
      void add(){
          cout<<"\nEnter 3 nos :";
          cin>>a>>b>>c;
          cout<<"Total  :"<<a+b+c<<endl;
      }
    
};
int main()
{
    base b;
    b.add();
    derive d;
    d.add();
    return 0;
}
