#include <iostream>
using namespace std;

class student{
    public:
      string name;
      int age;
      
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};

int main(){
    student o;
    cout<<"Enter name & age:"<<endl;
    cin>>o.name;
    cin>>o.age;
    //cout<<o.name<<endl;
    //cout<<o.age<<endl;
    o.display();
    return 0;
}
