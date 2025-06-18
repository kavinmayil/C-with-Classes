#include <iostream>
using namespace std;
int prime(int a);
int main()
{
    int n;
    cout<<"Enter no Range :";
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=prime(i);
        if(k==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
int prime(int a){
    int count=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            count++;
        }
    }return count;
}
