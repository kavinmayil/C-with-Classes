#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No of element :";
    cin>>n;
    int a[n];
    cout<<"Enter"<<n<<" elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
