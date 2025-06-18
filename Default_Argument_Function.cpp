#include <iostream>//Default Argument Function
using namespace std;

void biodata(string name,int age,string city="Salem"){
    cout<<name<<" is From "<<city<<" and age is "<<age<<endl;
}
int main()
{
    biodata("Ram",25,"salem");
    biodata("Sam",22,"namakal");
    biodata("dev",25);
    return 0;
}
