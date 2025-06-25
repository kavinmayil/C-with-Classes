#include <iostream>
using namespace std;
class A{
    private:
      int x;
    public:
      A(){
          x=0;
      }
      void print(){
          cout<<"X :"<<x<<endl;
      }
      friend void setValue(A &o,int a);
};

void setValue(A &o,int a){
    o.x=a;
}
int main()
{
    A o;
    o.print();
    setValue(o,25);
    o.print();
    return 0;
}
