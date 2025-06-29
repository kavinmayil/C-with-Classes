//Exception Handling
#include <iostream>
using namespace std;
int main()
{
   int a=10,b=0,c;
   try{
       if(b==0)
          throw 25;
        c=a/b;
        cout<<"Result:"<<c<<endl;
   }
   catch(int e){
       cout<<Error no :" e<<" Cant Divisible BY Zero"<<endl;
   }
    return 0;
}
