#include <iostream>
using namespace std;
float lowestSpeed(float kilometers, string time);

main()
{
    float kilometers;
    string time;
    float lowestprice;

    cout<<"Enter distance: "<<endl;
    cin>>kilometers;

    cout<<"Enter the time: "<<endl;
    cin>>time;

    lowestprice=lowestSpeed(kilometers, time);

    cout<<lowestprice;

    


}

float lowestSpeed(float kilometers, string time)
{
    float taxi;
    float bus;
    float train;
    float lowest;

    if(time=="Day")
    {   
        if(kilometers>=100.0)
        {
           train=0.06*kilometers; 
           lowest=train;
        }

        else if(kilometers>=20.0 && kilometers<100.0)
        {
            bus=0.09*kilometers;
            lowest=bus;
        }
        
        else
        {
            taxi=(0.79*kilometers)+0.7;   
            lowest=taxi;
        }
        
    } 

    if(time=="Night")
    {   
        if(kilometers>=100.0)
        {
           train=0.06*kilometers; 
           lowest=train;
        }

        else if(kilometers>=20 && kilometers<100)
        {
            bus=0.09*kilometers;
            lowest=bus;
        }
        
        else if(kilometers<20)
        {
            taxi=(0.90*kilometers)+0.7;   
            lowest=taxi;
        }
    
        
    } 
    
    
return lowest;


}