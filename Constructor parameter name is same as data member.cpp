#include <iostream>//Constructor parameter name is same as data member
using namespace std;
class student{
    private:
      string name;
      int age;
    public:
     /* student(string name,int age){
          this->name=name;
          this->age=age;
      } */
        student(string name,int age):name(name),age(age){}
      void print(){
          cout<<"Name :"<<name<<endl;
          cout<<"age  :"<<age<<endl;
      }
};
int main() {
    student o("KavinmayiL",20);
    o.print();
    return 0;
}
