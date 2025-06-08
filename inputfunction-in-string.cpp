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
    // Input Function
  /*  string str;
    cout<<"Enter The String :";
    cin>>str;
    cout<<"String : "<<str<<endl;
    fflush(stdin);
    cout<<"Enter The String :"<<endl;
    getline(cin,str);
    cout<<"String : "<<str; */
    string str;
    cout<<"Enter the String :";
    cin>>str;
    str.push_back('s');//add last at the string
    cout<<str<<endl;
    str.pop_back();//remove single letter from back
    cout<<str<<endl;
    return 0;
}     */
