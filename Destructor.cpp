#include <iostream>
using namespace std;

class math{
    private:
      int a,b,c;
    public:
      math(){
          a=10;
          b=20;
      }
      ~math(){
        cout<<"Memory Destroy"<<endl; 
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
