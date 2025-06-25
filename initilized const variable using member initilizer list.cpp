#include <iostream>//initilized const variable using member initilizer list
using namespace std;
class Base{
    private:
      const int x;
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
    Base o(50);
    return 0;
}
