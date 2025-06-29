#include <iostream>
using namespace std;
/*
isalnum
isalpha
isdigit
islower
isupper
isspace  */
int main()
{
   char a[6]="R@ 1a";
   for(int i=0;i<=5;i++){
      /* if(isalnum(a[i])){
           cout<<a[i]<<endl;
       } 
       if(isalpha(a[i])){
           cout<<a[i]<<endl;
       } 
       if(isdigit(a[i])){
           cout<<a[i]<<endl;
       } 
       if(islower(a[i])){
           cout<<a[i]<<endl;
       } 
       if(isupper(a[i])){
           cout<<a[i]<<endl;
       } */
       if(isspace(a[i])){
           cout<<a[i]<<endl;
           cout<<"-----"<<endl;
       }
       
       
   }
    return 0;
}
