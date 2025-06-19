#include <iostream>
using namespace std;
//Base class
class shape{
  public:
    float length,breath,radius;
};
class rectangle:public shape{
    public:
      void getDetails(){
          cout<<"Enter Length :"<<endl;
          cin>>length;
          cout<<"Enter Breath :"<<endl;
          cin>>breath;
      }
      float rectangle_Area(){
          return length*breath;
      }
};
class circle:public shape{
    public:
      void getCircleDetails(){
          cout<<"Enter radius :"<<endl;
          cin>>radius;
      }
      double circle_Area(){
          return 3.14*(radius*radius);
      }
};
class square:public shape{
    public:
      void getSquareDetails(){
          cout<<"Enter Length :"<<endl;
          cin>>length;
      }
      double square_Area(){
          return length*length;
      }
};

int main(){
    rectangle r;
    circle c;
    square s;
    r.getDetails();
    cout<<"Area of rectangle:"<<r.rectangle_Area()<<endl;
    c.getCircleDetails();
    cout<<"Area of Circle :"<<c.circle_Area()<<endl;
    s.getSquareDetails();
    cout<<"Area of square :"<<s.square_Area()<<endl;
    return 0;
}
