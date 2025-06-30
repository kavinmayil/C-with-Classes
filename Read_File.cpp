#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string myText;
    ifstream MyReadFile("test.txt");
    while(getline(MyReadFile,myText)){
        cout<<myText<<endl;
    }
    return 0;
}
