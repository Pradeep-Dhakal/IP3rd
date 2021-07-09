#include<iostream>
using namespace std;

int main(){
    string name="pradeep";

    string* myname=&name;

    cout<<myname<<"\n";
    cout<<&name;
}