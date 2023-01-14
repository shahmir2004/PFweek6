#include <iostream>
using namespace std;

char calculategrades(int marks);

main()
{
    int marks;
    char grade;
    
    cout<<"Enter marks: "<<endl;
    cin>>marks;

    grade=calculategrades(marks);
    cout<<grade;


}


char calculategrades(int marks)
{
    char grade;

    if(marks<50)
    {
        grade='F';
    }
    else if(marks>=50 && marks<=60)
    {
        grade='E';
    }
    else if(marks>=61 && marks<=70)
    {
        grade='D';
    }
    else if(marks>=71 && marks<=80)
    {
        grade='C';
    }
    else if(marks>=81 && marks<=85)
    {
        grade='B';
    }

    else if(marks>85 && marks<=100)
    {
        grade='A';
    }

    return grade;
}