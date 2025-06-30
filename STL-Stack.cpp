#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> x){
   while(!x.empty()){
       cout<<" "<<x.top();
       x.pop();
   }
}
int main() 
{
   stack<int> s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   cout<<"Empty or not:"<<s.empty()<<endl;
   cout<<"Size :"<<s.size()<<endl;
   print(s);
   s.pop();
   cout<<endl;
   print(s);
   return 0;
}
