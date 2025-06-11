#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the month in Number(1-12) :"<<endl;
    cin>>m;
    switch(m){
        case 1:
            cout<<"January"<<endl;
            break;
        case 2:
            cout<<"feburary"<<endl;
            break;
        case 3:
            cout<<"march"<<endl;
            break;
        case 4:
            cout<<"april"<<endl;
            break;
        case 5:
            cout<<"may"<<endl;
            break;
        case 6:
            cout<<"June"<<endl;
            break;
        case 7:
            cout<<"July"<<endl;
            break;
        case 8:
            cout<<"august"<<endl;
            break;
        case 9:
            cout<<"septmember"<<endl;
            break;
        case 10:
            cout<<"octomber"<<endl;
            break;
        case 11:
            cout<<"november"<<endl;
            break;
        case 12:
            cout<<"december"<<endl;
            break;
        default :
            cout<<"there will be 1-12 months no "<<m<<" month in years "<<endl;
            break;
    }
    return 0;
}
