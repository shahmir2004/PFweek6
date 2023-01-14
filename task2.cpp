#include <iostream>
using namespace std;
float discount(float originalamount, string day, string month);
main()
{
    float price,result;
    string month,day;

    cout<<"Enter original price: "<<endl;
    cin>>price;

    cout<<"Enter the day of the week: "<<endl;
    cin>>day;

    cout <<"Enter the month: "<<endl;
    cin >> month;
    
    result=discount(price, day,month);

    cout<<result;



}

float discount(float originalamount, string day, string month)
{
    float discountedprice=originalamount;

    if(day=="Sunday" && (month =="October" || month=="March" || month=="August"))
    {
       
            discountedprice=originalamount*0.9;
       
    }

    if(day=="Monday" &&(month=="November" || month=="December"))
    {
        discountedprice=originalamount*0.95;
    }
    
    return discountedprice;


}