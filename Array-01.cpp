#include <iostream>
using namespace std;
int prime(int a);
int main()
{
    int a[]={10,20,30,40,50,0,0,0,0};
    for(int x:a)
        cout<<x<<endl;
    cout<<"count of a:"<<sizeof(a)/sizeof(int);
    
    return 0;
}
