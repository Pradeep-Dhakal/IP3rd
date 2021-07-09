#include<iostream>
using namespace std;

int namefunc(int a, int b);
int a=10, b=9;
int main(){
    
    
    namefunc(a, b);

    return 0;
}

int namefunc(int a, int b){
    cout <<"the sum is: "<<a+b;
    // return a+b;
}