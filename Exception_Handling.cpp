#include <iostream>
using namespace std;
int main()
{
    try{
        throw string("kavin");
    }
    catch(int e){
        cout<<"Error Code :"<<e<<endl;
    }
    catch(float e){
        cout<<"Error Code :"<<e<<endl;
    }
    catch(char e){
        cout<<"Error Code :"<<e<<endl;
    }
    catch(...){
        cout<<"Error in program"<<endl;
    }
    return 0;
}
