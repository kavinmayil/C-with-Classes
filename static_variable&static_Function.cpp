#include <iostream>
using namespace std;
class student
{
  private:
  static int x;
    string name;
    int age;
  public:
    student(string n,int a){
        x++;
        name=n;
        age=a;
    }
    void print(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
        cout<<"\n\n";
    }
    static int getcount(){
        return x;
    }
};//static variable
int student::x=0;
int main()
{
    student s1("Ram",25);
    student s2("Sam",26);
    student s3("kumar",12);
    s1.print();
    s2.print();
    s3.print();
    cout<<"Total Student :"<<student::getcount()<<endl;
	return 0;
}
