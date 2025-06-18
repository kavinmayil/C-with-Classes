#include <iostream>
using namespace std;
//  templates in c++
template<class T>
void swaping(T &a,T &b){
    T t=a;
    a=b;
    b=t;
}
int main()
{
    char a='A',b='B';
    cout<<"Before swap A: "<<a<<" | B: "<<b<<endl;
    swaping(a,b);
    cout<<"After swap A: "<<a<<" | B: "<<b<<endl;
    
    int x=1,y=2;
    cout<<"Before swap x: "<<x<<" | y: "<<y<<endl;
    swaping(x,y);
    cout<<"After swap x: "<<x<<" | y: "<<y<<endl;
    return 0;
}
