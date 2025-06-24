#include <iostream>
using namespace std;
class A{
  private:
    int x,y;
  public:
    friend void setdata();
};
void setdata(){
    A o;
        o.x=10;
        o.y=20;
        cout<<"X :"<<o.x<<endl;
        cout<<"Y :"<<o.y<<endl;
    }
int main()
{
    setdata();
	return 0;
}
