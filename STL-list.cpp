#include <iostream>
#include <list>
using namespace std;
//STL-list in C++
void print(list<int> x){
    for(int o:x){
        cout<<" "<<o;
    }cout<<endl;
}
int main()
{
    list <int> a={70,20,50,10};
    print(a);
    list <int> b;
    b.push_front(150);
    b.push_front(250);
    b.push_back(350);
    print(b);
    cout<<"List 1st element in A :"<<a.front()<<endl;
    cout<<"List 1st element in B :"<<b.front()<<endl;
    cout<<"List(A) empty or not :"<<a.empty()<<endl;
    cout<<"Befor Reverse :";
    print(a);
    a.reverse();
    cout<<"After Reverse :";
    print(a);
    cout<<"Befor sort :";
    print(a);
    a.sort();
    cout<<"After sort :";
    print(a);
   return 0;
}
