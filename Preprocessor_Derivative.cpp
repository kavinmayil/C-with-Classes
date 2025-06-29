#include <iostream>
#define PI 3.14
#define rectangle(length,breadth)(length*breadth)
#define createString(s) #s
#define concat(a,b) a##b
using namespace std;
int main()
{
    cout<<"Area of Circle :"<<PI*5*5<<endl;
    int length=20,breadth=5,area;
    area=rectangle(length,breadth);
    cout<<"Area of Rectangle :"<<area<<endl;
    cout<<"New String :"<<createString(kavinmayil)<<endl;
    int ab=1000;
    cout<<"The value of AB :"<<concat(a,b)<<endl;
    cout<<"__LINE__:"<<__LINE__<<endl;
    cout<<"__FILE__:"<<__FILE__<<endl;
    cout<<"__TIME__:"<<__TIME__<<endl;
    cout<<"__DATE__:"<<__DATE__<<endl;
    cout<<"__cplusplus__:"<<__cplusplus<<endl;
    return 0;
}
