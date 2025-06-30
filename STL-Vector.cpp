#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> a;
   cout<<"Capacity :"<<a.capacity()<<endl;
   a.push_back(10);
   cout<<"Capacity :"<<a.capacity()<<endl;
   a.push_back(20);
   cout<<"Capacity :"<<a.capacity()<<endl;
   a.push_back(30);
   cout<<"Capacity :"<<a.capacity()<<endl;
   cout<<"Size :"<<a.size()<<endl;
   cout<<"Vector Element At 2 Index :"<<a.at(2)<<endl;
   cout<<"Vector Element At front :"<<a.front()<<endl;
   cout<<"Vector Element At back :"<<a.back()<<endl;
   cout<<"Before Pop :";
   for(int x:a){cout<<" "<<x;}cout<<endl;
   a.pop_back();
   cout<<"After pop :";
   for(int x:a){cout<<" "<<x;}cout<<endl;
   cout<<"Before Clear :"<<a.size()<<endl;
   a.clear();
   cout<<"After Clear :"<<a.size()<<endl;
   cout<<"After Capacity :"<<a.capacity()<<endl;
   vector<int> b(5,10);
   cout<<"B :";
   for(int x:b){cout<<" "<<x;}cout<<endl;
   vector<int> c(b);
    cout<<"C :";
   for(int x:c){cout<<" "<<x;}cout<<endl;
   for(auto i=c.begin();i!=c.end();i++)
   cout<<*i<<" ";cout<<endl;
   vector<int> d(5,20);
    cout<<"C :";
   for(int x:c){cout<<" "<<x;}cout<<endl;
   cout<<"D :";
   for(int x:d){cout<<" "<<x;}cout<<endl;
   d.swap(d);
   cout<<"After swap"<<endl;
   cout<<"C :";
   for(int x:c){cout<<" "<<x;}cout<<endl;
   cout<<"D :";
   for(int x:d){cout<<" "<<x;}cout<<endl;
   return 0;
}
