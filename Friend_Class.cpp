#include <iostream>
using namespace std;
class B;
class A{
  private:
    int x=10;
    friend B;
};
class B
{
    public:
       A o;
       void display(){
           cout<<"X :"<<o.x;
       }
};
int main()
{
    B obj;
    obj.display();
	return 0;
}
