#include <iostream>
using namespace std;
// Bank Management System Using Class & inheritance
/*
   1.Saving Account
   2.Current Account
   
   Account Creation
   Deposit
   Withdraw
   Balance
   
   */
class account{
    private:
      string name;
      int accno;
      string atype;
    public:
      void getAccountDetails(){
          cout<<"Enter Customer Name : "<<endl;
          cin>>name;
          cout<<"Enter Account no    : "<<endl;
          cin>>accno;
          cout<<"Enter Account Type  : "<<endl;
          cin>>atype;
      }
      void displayDetails(){
          cout<<"Customer Name   :"<<name<<endl;
          cout<<"Account No      :"<<accno<<endl;
          cout<<"Account Type    :"<<atype<<endl;
      }
};

class current_account:public account{
    private:
      float balance=0.0f;
    public:
      void c_display(){
          cout<<"Balance  :"<<balance<<endl;
      }
      void c_deposit(){
          float deposit;
          cout<<"Enter deposite Amount  :"<<endl;
          cin>>deposit;
          balance=balance+deposit;
      }
      void c_withdraw(){
          float withdraw;
          cout<<"balance:"<<balance<<endl;
          cout<<"Enter amount to be withdraw :"<<endl;
          cin>>withdraw;
          if(balance>1000){
              balance=balance-withdraw;
              cout<<"Balance Amount after Withdraw :"<<balance<<endl;
          }else{
              cout<<"Insufficient Balance"<<endl;
          }
      }
      
};

class saving_account:public account{
    private:
      float sav_balance=0.0f;
    public:
      void s_display(){
          cout<<"Balance :"<<sav_balance<<endl;
      }
      void s_deposit(){
          float deposit,interest;
          cout<<"Enter deposite Amount  :"<<endl;
          cin>>deposit;
          sav_balance=sav_balance+deposit;
          interest=(sav_balance*2)/100;
          sav_balance=sav_balance+interest;
      }
      void s_withdraw(){
          float withdraw;
          cout<<"balance:"<<sav_balance<<endl;
          cout<<"Enter amount to be withdraw :"<<endl;
          cin>>withdraw;
          if(sav_balance>500){
              sav_balance=sav_balance-withdraw;
              cout<<"Balance Amount after Withdraw :"<<sav_balance<<endl;
          }else{
              cout<<"Insufficient Balance"<<endl;
          }
      }
};
int main(){
   current_account c1;
   saving_account s1;
   char type;
   cout<<"Enter s for saving Account and C for current account"<<endl;
   cin>>type;
   int choice;
   if(type=='s'|| type=='S'){
       s1.getAccountDetails();
       while(1){
           cout<<"Choose Your Choice"<<endl;
           cout<<"1) Deposit"<<endl;
           cout<<"2) WithDraw"<<endl;
           cout<<"3) Display Balance"<<endl;
           cout<<"4) Display with full Details"<<endl;
           cout<<"5) Exit"<<endl;
           cout<<"Enter Your Choice"<<endl;
           cin>>choice;
           switch(choice){
                case 1:
                 s1.s_deposit();
                 break;
                case 2:
                 s1.s_withdraw();
                 break;
                case 3:
                 s1.s_display();
                 break;
                case 4:
                 s1.displayDetails();
                 s1.s_display();
                 break;
                case 5:
                 goto end;
                default:
                 cout<<"Entered choice is Invalid,TRY AGAIN";
                 break;
           }
       }
   }
   else if(type=='c'|| type=='C'){
       c1.getAccountDetails();
       int choice;
       while(1){
           cout<<"Choose Your Choice"<<endl;
           cout<<"1) Deposit"<<endl;
           cout<<"2) WithDraw"<<endl;
           cout<<"3) Display Balance"<<endl;
           cout<<"4) Display with full Details"<<endl;
           cout<<"5) Exit"<<endl;
           cout<<"Enter Your Choice"<<endl;
           cin>>choice;
           switch(choice){
                case 1:
                 c1.c_deposit();
                 break;
                case 2:
                 c1.c_withdraw();
                 break;
                case 3:
                 c1.c_display();
                 break;
                case 4:
                 c1.displayDetails();
                 c1.c_display();
                 break;
                case 5:
                 goto end;
                default:
                 cout<<"Entered choice is Invalid,TRY AGAIN";
                 break;
           }
       }
   }
   else{
       cout<<"Invalid Account Selection";
   }
   end:
   cout<<"\nThank You For Banking with us...";
    return 0;
}
