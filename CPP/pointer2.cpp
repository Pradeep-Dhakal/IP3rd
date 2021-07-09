#include <iostream>

using namespace std;

int main()
{

    string food = "dhal vaat";
    string *ptr = &food;

    cout << *ptr << "\n"; // it will print dhal vaar
    cout << ptr;          // it wil print mamory address

    return 0;
}