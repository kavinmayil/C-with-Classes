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

   // string a="hai i am kavinmayil";  
   /*
   string a("hai i am kavinmayil");
    cout<<a<<endl;  */
    // string concadination
    string firstname="kavin";
    string lastname="mayil";
   // cout<<firstname+lastname<<endl;
   cout<<firstname+" "+lastname<<endl;
    string fullname=firstname.append(lastname);
    cout<<fullname<<endl;
    //string Access
    string name="Sam kumar";
    cout<<name[0]<<endl;
    name[0]='R';
    cout<<name<<endl;
    return 0;
}
