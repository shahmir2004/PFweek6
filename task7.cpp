#include <iostream>
using namespace std;

float Price(string city, string product, float quantity);
main()
{

float finalprice, quantity;
string city, product;

cout<<"Enter city name: "<<endl;
cin>>city;

cout<<"Enter product: "<<endl;
cin>>product;

cout<<"Enter quantity: "<<endl;
cin>>quantity;

finalprice=Price(city, product, quantity);

cout<<finalprice;


}

float Price(string city, string product, float quantity)
{

    float finalprice;

    if(city=="sofia")
    {
        if(product=="coffee")
        {
            finalprice=quantity*0.5;
        }
        else if(product=="water")
        {
            finalprice=quantity*0.8;
        }
        else if(product=="beer")
        {
            finalprice=quantity*1.2;
        }
        else if(product=="sweets")
        {
            finalprice=quantity*1.45;
        }
        else if(product=="peanuts")
        {
            finalprice=quantity*1.6;
        }
    }
    
    if(city=="plovdiv")
    {
        if(product=="coffee")
        {
            finalprice=quantity*0.4;
        }
        else if(product=="water")
        {
            finalprice=quantity*0.7;
        }
        else if(product=="beer")
        {
            finalprice=quantity*1.15;
        }
        else if(product=="sweets")
        {
            finalprice=quantity*1.3;
        }
        else if(product=="peanuts")
        {
            finalprice=quantity*1.5;
        }
    }

    if(city=="varna")
    {
        if(product=="coffee")
        {
            finalprice=quantity*0.45;
        }
        else if(product=="water")
        {
            finalprice=quantity*0.7;
        }
        else if(product=="beer")
        {
            finalprice=quantity*1.10;
        }
        else if(product=="sweets")
        {
            finalprice=quantity*1.35;
        }
        else if(product=="peanuts")
        {
            finalprice=quantity*1.55;
        }
    }

    return finalprice;



}