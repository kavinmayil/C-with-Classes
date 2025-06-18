#include <iostream>
using namespace std;
int main()
{
    int days;
    float fine;
    cout<<"Enter The No Days:";
    cin>>days;
    if(days>1 && days<=5){
        cout<<"Per Day Fine Amount is:0.50"<<endl;
        cout<<"Total Fine Amount is:"<<days*0.50;
    }
    else if(days>=6 && days<=10){
        cout<<"Per Day Fine Amount is: 1"<<endl;
        cout<<"Total Fine Amount is:"<<days*0.50;
    }
    else if(days>10 && days<=30){
        cout<<"Per Day Fine Amount is: 5"<<endl;
        cout<<"Total Fine Amount is:"<<days*5.0;
    }
    else{
         cout<<"Membership cancell"<<endl;
    }
    return 0;
}
