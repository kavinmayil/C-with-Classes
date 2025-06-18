#include <iostream>
using namespace std;

class circle
{
    private:
       float radius;
    public:
       float area()
       {   //A=pi*r^2
           cout<<"Enter The Radius :"<<endl;
           cin>>radius;
           return (3.14*(radius*radius));
       }
       float circumference(){
           //c=2*pi*r
           return (2*3.14*radius);
       }
};
int main(){
    circle o;
    cout<<"Area of Circle :"<<o.area()<<endl;
    cout<<"Circumference of Circle :"<<o.circumference()<<endl;
    return 0;
}
