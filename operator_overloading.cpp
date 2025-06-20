#include <iostream>
using namespace std;
/*
2+5i
3+2i
----
5+7i

*/
class complex{
    private:
      int real,img;
    public:
      complex(){ real=0;img=0;}
      complex(int r,int i){real=r;img=i;}
      void print(){
          cout<<real<<" + "<<img<<"i"<<endl;
      }
      complex operator +(complex c){
          complex temp;
          temp.real=real+c.real;
          temp.img=img+c.img;
          return temp;
      }
};
int main()
{
    complex c1(2,5);
    complex c2(3,2);
    complex c3;
    c3=c1+c2;
    c3.print();
    return 0;
}
