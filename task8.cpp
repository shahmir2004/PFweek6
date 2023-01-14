#include <iostream>
#include <iomanip>
using namespace std;
float moneyontransportcalculator(int people, float budget);
float budgetEnough(float totalticketprice, float moneyaftertransport);
float budgetnotenough(float totalticketprice, float moneyaftertransport);

main()
{

float budget, totalticketprice, moneyaftertransport, money;
string type;
int people;

cout<<"Enter your budget: "<<endl;
cin>>budget;

cout<<"Enter your category: "<<endl;
cin>>type;

cout<<"Enter the number of people: "<<endl;
cin>>people;

if(type=="vip")
{
    totalticketprice=people*499.99;
    moneyaftertransport=moneyontransportcalculator(people, budget);
    if(moneyaftertransport>totalticketprice)
    {
        money= budgetEnough(totalticketprice, moneyaftertransport);
        cout<<"Yes you have "<< fixed << setprecision(2)<<money<<" QR left"<<endl;
    }
    else if(moneyaftertransport<totalticketprice)
    {
        money=budgetnotenough(totalticketprice, moneyaftertransport);
        cout<<"Not enough money! You need "<<fixed<<setprecision(2)<<money<<" QR"<<endl;
    }

}

else if(type=="normal")
{
    totalticketprice=people*249.99;
    moneyaftertransport=moneyontransportcalculator(people, budget);
    if(moneyaftertransport>totalticketprice)
    {
        money= budgetEnough(totalticketprice, moneyaftertransport);
        cout<<"Yes you have "<<fixed<<setprecision(2)<<money<<" QR left"<<endl;
    }
    else if(moneyaftertransport<totalticketprice)
    {
        money=budgetnotenough(totalticketprice, moneyaftertransport);
        cout<<"Not enough money! You need "<<fixed<<setprecision(2)<<money<<" QR"<<endl;
    }
}



}

float moneyontransportcalculator(int people, float budget)
{
    int moneyleft;

    if(people>=1 && people<=4)
    {
        moneyleft=budget*0.25;
    }
    else if(people>=5 && people<=9)
    {
        moneyleft=budget*0.4;
    }
    else if(people>=10 && people<=24)
    {
        moneyleft=budget*0.5;
    }
    else if(people>=25 && people<=49)
    {
        moneyleft=budget*0.6;
    }
    else if(people>=50)
    {
        moneyleft=budget*0.75;
    }

    return moneyleft;

}

float budgetEnough(float totalticketprice, float moneyaftertransport)
{
    float money;

    money=moneyaftertransport-totalticketprice;

    return money;

}

float budgetnotenough(float totalticketprice, float moneyaftertransport)
{
    float money;
    money=totalticketprice-moneyaftertransport;

    return money;

}