#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()

{
    float speed;
    string result;

    cout<<"Enter speed: "<<endl;
    cin>>speed;

    result=checkSpeed(speed);
    cout<<result;



}

string checkSpeed(float speed)
{
    string check;
    
    if (speed<=10)
    {
        check="slow";
    }
    if(speed>10 && speed <=50)
    {
        check="average";
    }
    if(speed>51 && speed<=150)
    {
        check="fast";
    }
    if (speed>151 && speed <=1000)
    {
        check="ultra - fast";
    }
    if(speed>1001)
    {
        check="Extremely fast";
    }


return check;


}