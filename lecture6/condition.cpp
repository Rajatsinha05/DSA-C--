#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:

        cout << "Tuesday" << endl;
        break;

    default:
        cout << "Unknown number" << endl;
    }

    return 0;
}