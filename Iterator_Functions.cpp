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
    // Iterator Functions
    string str="kavinmayil";  
    string::iterator it;
    for(it=str.begin();it!=str.end();it++) //forward
       cout<<*it<<endl;
    cout<<"--------------------------------------"<<endl;
    string::reverse_iterator it2;
    for(it2=str.rbegin();it2!=str.rend();it2++)  // reverse
       cout<<*it2<<endl;
    return 0;
}     
