#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= (n + i) / 2; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}