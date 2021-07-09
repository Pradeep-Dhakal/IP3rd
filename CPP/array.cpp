#include <iostream>
using namespace std;

int main()
{

    int n = 3, i;
    string name[n];

    cout << "enter name: ";
    for (i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    cout << "name you entered is ";
    for (i = 0; i < n; i++)
    {
        cout << name[i]<< " ";
    }
    return 0;
}