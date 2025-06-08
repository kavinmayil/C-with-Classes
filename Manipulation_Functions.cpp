#include <iostream>
using namespace std;
/* 
c++ string
    Input Function
    Capacity Function
    Iterator Function
    Manipulating Function  */
    
int main()
{
    // Manipulation Functions
    string x="ram";  
    string y="sam";
    cout<<"Before X:"<<x<<endl;
    cout<<"Before y:"<<y<<endl;
    x.swap(y);
    cout<<"After X:"<<x<<endl;
    cout<<"After y:"<<y<<endl;
    return 0;
}     
