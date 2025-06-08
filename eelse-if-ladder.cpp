#include <iostream>
using namespace std;

int main()
{
    int h,t;
    float c;
    cout<<"Enter the value of Hardness,Tensile Strength and Carbon :"<<endl;
    cin>>h>>t>>c;
    if(h>50 && c<0.7 && t>5600){
        cout<<"steel grade :10"<<endl;
    }
    else if(h>50 && c<0.7 ){
        cout<<"steel grade :9"<<endl;
    }
    else if(c<0.7 && t>5600){
        cout<<"steel grade :8"<<endl;
    }
    else if(h>50 && t>5600){
        cout<<"steel grade :7"<<endl;
    }
    else if(h>50 || c<0.7 || t>5600){
        cout<<"steel grade :6"<<endl;
    }
    else{
        cout<<"steel grade :5"<<endl;
    }
    return 0;
}     
