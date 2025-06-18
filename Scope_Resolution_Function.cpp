#include <iostream>
using namespace std;

class student{
   private:
      string name;
      int m1,m2,m3,tot;
      float avg;
    public:
       void getData(){
           cout<<"Enter the Name :"<<endl;
           cin>>name;
           cout<<"Enter 3 Marke :"<<endl;
           cin>>m1>>m2>>m3;
       }
       void display();
};
void student::display(){
    tot=m1+m2+m3;
    avg=tot/3.0;
    cout<<"Name     :"<<name<<endl;
    cout<<"m1       :"<<m1<<endl;
    cout<<"m2       :"<<m2<<endl;
    cout<<"m3       :"<<m3<<endl;
    cout<<"Total    :"<<tot<<endl;
    cout<<"Average  :"<<avg<<endl;
}

int main(){
    student o;
    o.getData();
    o.display();
    return 0;
}
