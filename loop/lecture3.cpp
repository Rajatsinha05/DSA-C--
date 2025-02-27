#include <iostream>
using namespace std;

int main()
{

    // int i = 100;

    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i < 10);

    // bool b = true;
    // while (b)
    // {
    //     cout << i << " " << endl;
    //     if (i == 100)
    //     {
    //         b = false;
    //     }
    //     i++;
    // }

    // int n, i = 1, sum = 0, count = 0;
    int n;
    int count = 0;
    int sum = 0;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            count++;
            sum += i;
        }
        i++;
    }

    cout << sum << count << endl;
    return 0;
}