#include <iostream>
using namespace std;

int main()
{
    //aeiou AEIOU
    char c;
    cout<<"Enter THe Character :";
    cin>>c;
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u'||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U'){
        cout<<c<<" is a Vowels";
    }
    else{
        cout<<c<<" is not a vowels";
    }
    return 0;
}     
