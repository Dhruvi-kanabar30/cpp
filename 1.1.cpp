#include<iostream>
using namespace std;
class bankaccount
{
char name[15];
double account_number;
double balance;
public:
void deposit()
{
int a;
cout<<"\nEnter the amount you want to deposit=";
cin>>a;
balance=balance+a;
}
void withdraw()
{
int w;
cout<<"\n Enter the amount you want to withdraw=";
cin>>w;
balance=balance-w;
if(balance==0)
cout<<"\n there is no balance";
}
void display_balance()
{
cout<<"\n Balance is ="<<balance;
}
void getdata()
{
cout<<"\n Enter the account holder name=";
cin>>name;
cout<<"\n Enter the account number=";
cin>>account_number;
cout<<"\n Enter the initial balance=";
cin>>balance;
}
void putdata()
{
cout<<"\n The account holder name="<<name;
cout<<"\n The account number="<<account_number;
cout<<"\n The initial balance="<<balance;
}
};
int main()
{
bankaccount b1,b2;
b1.getdata();
b1.putdata();
b1.deposit();
b1.withdraw();
b1.display_balance();
cout<<"Dhruvi Kanabar";
}
