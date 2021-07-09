#include <iostream>
using namespace std;

int main()
{
    int numberday;

    cout << "enter a number between 1-7";
    cin >> numberday;

    switch (numberday)
    {
    case /* constant-expression */ 1:
        /* code */€
        break;

    case 2:
        cout << "sundey";
        break;

    case 3:
        cout << "monday";
        break;

    case 4:
        cout << "tuesday";
        break;

    case 5:
        cout << "wednesday";
        break;

    case 6:
        cout << "thursday";
        break;

    case 7:
        cout << "friday";
        break;

    default:
        cout << "please enter between 1-7 only ";
    }

    return 0;
}