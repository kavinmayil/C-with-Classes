#include <iostream>
using namespace std;
class Base
{
  private:
    char x;
  public:
   Base(int a):x{a}{
       cout<<"X value :"<<(int)x<<endl;
   }
};
int main()
{
    Base o(400);
    return 0;
}
