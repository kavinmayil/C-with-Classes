#include <iostream>
using namespace std;
class bank
{
public:
	virtual void debit_credit()=0;
	virtual void loan()=0;

};
class HDFC:public bank
{
public:
	void debit_credit() {
		cout<<"HDFC Banking debit credit"<<endl;
	}
	void loan() {
		cout<<"HDFC loan 18%"<<endl;
	}
};
class IB:public bank
{
    public:
      void debit_credit(){
          cout<<"IB Banking debit credit"<<endl;
      }
      void loan() {
		cout<<"IB loan 8%"<<endl;
	}

};
int main()
{
    bank *b=new IB();
    b->debit_credit();
    b->loan();
    bank *c=new HDFC();
    c->debit_credit();
    c->loan();
	return 0;
}
