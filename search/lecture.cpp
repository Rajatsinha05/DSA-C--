#include <iostream>
#include <vector>
using namespace std;

int linerSearch(vector<int> arr, int t)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(vector<int> arr, int t, int i, int j)
{
    int start = i;
    int end = j;
    while (start <= end)
    {
        int mid = int((start + end) / 2);
        // cout << " " << mid << endl;
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int findPeak(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = int((start + end) / 2);
        if (arr[mid] < arr[0])
        {
            end = mid - 1;
        }
        else
        {
            result = mid;
            start = mid + 1;
        }
    }

    return result;
}

int nearestValue(vector<int> arr, int t, int i, int j)
{
    int start = i;
    int end = j;
    int result = -1;
 
    if (t < arr[0])
    {

        return -1;
    }
    while (start <= end)
    {
        int mid = int((start + end) / 2);
        // cout << " " << mid << endl;
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            end = mid - 1;
        }
        else
        {
            result = mid;
            start = mid + 1;
        }
    }
    return result+1;
}

int main()
{

    vector<int> arr = {6, 7, 20, 30, 40, 100};
    // int t = 1;
    // int peakIndex = findPeak(arr);

    // int result = binarySearch(arr, t, 0, peakIndex);
    // if (result == -1)
    // {
    //     result = binarySearch(arr, t, peakIndex + 1, arr.size() - 1);
    // }
    // cout << result << endl;

    // cout << arr[peakIndex] << endl;

    // int result = binarySearch(arr, t);

    // cout << result << endl;
    int result = nearestValue(arr, -1, 0, arr.size() - 1);
    cout << result << endl;
    return 0;
}