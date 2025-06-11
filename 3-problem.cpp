#include <iostream>
using namespace std;
int main()
{
    float bs,gs,da,hra;
    cout<<"Enter your salary :"<<endl;
    cin>>bs;
    if(bs<1500){
        hra=bs*10/100;
        da=bs*90/100;
    }
    else{
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    cout<<"Basic salary    :"<<bs<<endl;
    cout<<"hra salary      :"<<hra<<endl;
    cout<<"da salary       :"<<da<<endl;
    cout<<"Gross salary    :"<<gs<<endl;
    return 0;
}
