#include<iostream>
using namespace std;


string firstName, lastName,fullName;

int main(){

    cout<<"enter first name";
    cin>>firstName;

    cout<<"enter first name";
    cin>>lastName;

    cout<<"My name is "<<firstName <<" "<< lastName<<endl;

    // fullName=firstName+lastName;
    // fullName=firstName.append(lastName);

    cout<<"my name is " <<firstName+lastName;



    return 0;
}