#include <iostream>
using namespace std;

int findValue(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

void findDiffs(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] - arr[i + 1] << endl;
    }
}

bool isSorted(int arr[])
{
    int n = sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

void findPair(int arr[], int n, int target)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    cout << -1 << -1 << endl;
    return;
}

bool isPairExists(int arr[], int n, int target)
{

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (target == sum)
        {
            return true;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return false;
}
int main()
{

    int marks[] = {10, 12, 50, 190, 200};
// 10 200 12 190 50

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    // two pointer
    int i = 0;
    int j = 4;
    while (i < j)
    {
        int temp = marks[i];
        marks[i] = marks[j];
        marks[j] = temp;
        i++;
        j--;
    }
    // tc o(n)
    // sc o(1)
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}