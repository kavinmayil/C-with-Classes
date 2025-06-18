#include <iostream>
using namespace std;
//  Enum in c++

enum gender {Male,Female};
int main()
{
   gender g=Male;
   switch(g){
       case Male:
          cout<<"Gender Male"<<endl;
          break;
        case Female:
          cout<<"Gender Female"<<endl;
          break;
         default:
           cout<<"Invalid Gender"<<endl;
           break;
   }
    return 0;
}
