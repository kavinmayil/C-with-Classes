#include <iostream>
using namespace std;
//  templates in c++

void swaping(char &a,char &b){
    char t=a;
    a=b;
    b=t;
}
int main()
{
    char a='A',b='B';
    cout<<"Before swap A: "<<a<<" | B: "<<b<<endl;
    swaping(a,b);
    cout<<"After swap A: "<<a<<" | B: "<<b<<endl;
    return 0;
}
