#include <iostream>
using namespace std;

void evenValue(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }
}

void oddIndex(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 1)
        {
            cout << arr[i] << i << endl;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value of index " << i << endl;
        cin >> arr[i];
    }

    cout << "value of array" << endl;
    printArray(arr, n);
    return 0;
}