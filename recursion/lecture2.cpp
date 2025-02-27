#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr, int i)
{
    if (i < 0)
    {
        return;
    }

    print(arr, i - 1);
    cout << arr[i] << " ";
}

int stairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }

    return stairs(n - 1) + stairs(n - 2);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // print(arr, arr.size() - 1);
    cout << stairs(4);
    return 0;
}