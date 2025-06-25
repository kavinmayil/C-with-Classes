#include <iostream>
using namespace std;
class Base{
    private:
      int x;
    public:
      Base(int a):x(a){
          cout<<"Value of X :"<<x<<endl;
      }
};
class child:public Base
{
    private:
      int y;
    public:
      child(int a,int b):Base(a),y(b){
          cout<<"Value of y :"<<y<<endl;
      }
      
};
int main() {
    child o(25,50);
    return 0;
}
