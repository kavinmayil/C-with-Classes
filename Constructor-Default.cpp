#include <iostream>
using namespace std;

class math{
    private:
      int a,b,c;
    public:
      math(){
          a=5;
          b=10;
      }
      void add(){
          c=a+b;
          cout<<"Total :"<<c<<endl;
      }
};

int main(){
    math o;
    o.add();
    return 0;
}
