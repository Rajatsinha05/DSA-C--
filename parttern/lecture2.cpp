#include <iostream>
using namespace std;

void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j <= n - i)
            {
                cout << "-";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int reverse(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j <= n - i)
            {
                cout << "-";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void border(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j == 1 || j == n || i == 1 || i == n)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
int main()
{
    int num;
    cin >> num;

    // pattern(num/2);
    // reverse(num/2);
    border(num);
    return 0;
}