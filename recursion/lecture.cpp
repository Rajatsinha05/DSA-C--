#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << "n: " << n << endl;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    // print(5);
    // cout << "fact: " << fact(5) << endl;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}

// 0 1 1 2 3 5 8 13