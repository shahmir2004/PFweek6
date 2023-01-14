#include <iostream>
using namespace std;
int isGreater(int num1, int num2, int  num3);
main()
{
    
    int num1,num2,num3,result;

    cout<<"Enter number 1: "<<endl;
    cin>> num1;

    cout <<"Enter number 2: "<<endl;
    cin>>num2;

    cout<<"Enter number 3: "<<endl;
    cin>>num3;

    result=isGreater(num1,num2,num3);
    cout<<result;

}

int isGreater(int num1, int num2, int  num3)
{

    int result;
    
    if(num1>num2)
    {
        if(num1>num3)
        {
            result=num1;
        }
    
        else
        {
            result=num3;
        }

    }

    if(num1<num2)
    {
        if(num2>num3)
        {
            result=num2;
        }
        else
        {
            result=num3;
        }


    }
    
    return result;


}