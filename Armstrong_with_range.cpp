#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,r=0;
    for(int i=100;i<999;i++){
        
    int n=i;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==i){
        cout<<i<<endl;
    }
    sum=0;
    
    }
    
    return 0;
}

