#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,r=0;
    cout<<"Enter the no :"<<endl;
    cin>>n;
    int t=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==t){
        cout<<"Amstrong"<<endl;
    }
    else{
        cout<<"Not Amstron "<<endl;
    }
    return 0;
}

