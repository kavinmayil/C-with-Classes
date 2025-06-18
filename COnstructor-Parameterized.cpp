#include <iostream>
using namespace std;

class math{
    private:
      int a,b,c;
    public:
      math(int x,int y){
          a=x;
          b=y;
      }
      void add(){
          c=a+b;
          cout<<"Total :"<<c<<endl;
      }
};

int main(){
    math o(10,25);
    o.add();
    return 0;
}
