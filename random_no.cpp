#include <iostream>
using namespace std;
void randnum(){
    int random;
    for(int i=0;i<10;i++){
        random=rand()%10;
        cout<<random<<endl;
    }
}
int main()
{
   randnum();
    return 0;
}
