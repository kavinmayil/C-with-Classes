#include <iostream>
using namespace std;

class math{
    private:
      int a,b,c;
    public:
      math(){  
          a=0;
          b=0;
      }
      math(int x,int y){
          a=x;
          b=y;
      }
      math(math &x){
          a=x.a;
          b=x.b;
      }
      void add(){
          c=a+b;
          cout<<"Total :"<<c<<endl;
      }
};

int main(){
    math o1;
    math o2(10,25);
    math o3(o2);
    o1.add();
    o2.add();
    o3.add();
    return 0;
}
