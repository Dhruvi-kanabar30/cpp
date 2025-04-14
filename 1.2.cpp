#include<iostream>
using namespace std;
class store
{
    double id;
    char name[15];
    int quantity;
    int price;

public:
    void add_product();
    void update_product();
    void display_product();
};

void store::add_product()
{
  cout<<"\n Enter the id number of the product: ";
  cin>>id;
  cout<<"\n Enter the name of the product: ";
  cin>>name;
  cout<<"\n Enter the quantity of the product: ";
  cin>>quantity;
  cout<<"\n Enter the price of the product: ";
  cin>>price;
}

void store::update_product()
{
    int q;
    char choice;
    double ID;
    cout<<"\n Enter the id of product you want to update: ";
    cin>>ID;

    if(ID==id)
    {
       cout<<"\n Enter - in order to remove the quantity";
       cout<<"\n Enter + in order to add the quantity";
       cin>>choice;

       switch(choice)
       {
       case '+':
        {
            cout<<"\n Enter the quantity: ";
            cin>>q;
            quantity=quantity+q;
            break;
        }
       case '-':
        {
            cout<<"\n Enter the quantity: ";
            cin>>q;
            quantity=quantity-q;
            break;
        }
       }
    }
    else
        cout<<"\n ID is not matched";
}
void store::display_product()
{
    int total_price;
    total_price=price*quantity;
    cout<<"\n The id of the product is: "<<id;
    cout<<"\n The name of the product is: "<<name;
    cout<<"\n Enter the quantity: "<<quantity;
    cout<<"\n Enter the price: "<<price;
    cout<<"\n Total price: "<<total_price;
}

int main()
{
    store aa,bb;
    aa.add_product();
    aa.display_product();
    aa.update_product();
    aa.display_product();
    bb.add_product();
    bb.display_product();
    bb.update_product();
    bb.display_product();
    cout<<"\n Kanabar Dhruvi";
    return 0;
}
