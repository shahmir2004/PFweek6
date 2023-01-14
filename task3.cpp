#include<iostream>
using namespace std;

string checkTitle(int age, char gender);
main()
{

int age;
char gender;
string title;

cout<<"Enter age: "<<endl;
cin>>age;

cout<<"Enter gender: "<<endl;
cin>>gender;

title=checkTitle(age, gender);
cout<<title;


}

string checkTitle(int age, char gender)
{

    string title;

    if(gender=='m' && age>=16)
    {
        title="Mr. ";
    }
    else if(gender=='m' && age<16)
    {
        title="Master";
    }
    else if(gender=='f' && age>=16)
    {
        title="Ms.";
    }
    else if(gender=='f' && age<16)
    {
        title="Miss";
    }
    return title;

}