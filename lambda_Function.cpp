#include <iostream>
using namespace std;

int main()
{
    auto sum=[](int a,int b){return a+b;};
    cout<<"Total :"<<sum(4,6)<<endl;
    return 0;
}
