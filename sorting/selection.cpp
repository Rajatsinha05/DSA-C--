
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    // selection sort

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        // swaping the indices
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}