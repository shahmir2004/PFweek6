#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
main()
{

string type;
int rows, columns;
float result;

cout<<"Enter screen type: "<<endl;
cin>> type;

cout<<"Enter number of rows: "<<endl;
cin>>rows;

cout<<"Enter number of columns"<<endl;
cin>>columns;

result=totalIncome(type,rows,columns);
cout<<result;




}

float totalIncome(string type, int rows, int columns)
{

    float income;

    if(type=="Premier")
    {
        income=(rows*columns)*12.0;


    }
    if(type=="normal")
    {
        income=(rows*columns)*7.5;
    }
    if(type=="Discount")
    {
        income=(rows*columns)*5;
    }

    return income;


}