#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int printSubArray(vector<int> subArr)
{

    int sum = 0;

    for (int sub : subArr)
    {
        sum += sub;
    }
    return sum;
}

void genSubArray(vector<int> arr, int k)
{
    int maxSum = -100000000;
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> subArray;
        for (int j = i; j < arr.size(); j++)
        {
            subArray.push_back(arr[j]);
            if (subArray.size() == k)
            {
                int crSum = printSubArray(subArray);
                if (crSum > maxSum)
                {
                    maxSum = crSum;
                }
            }
        }
    }

    cout << maxSum << endl;
}

int kadanesAlgo(vector<int> arr)
{
    int max = INT_MIN;
    int crSum = 0;
    for (int val : arr)
    {
        crSum += val;
        if (crSum > max)
        {
            max = crSum;
        }
        if (crSum < 0)
        {
            crSum = 0;
        }
    }

    return max;
}

vector<int> merge(vector<int> arr1, vector<int> arr2)
{
    vector<int> result;
    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else
        {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // handle the edge case
    while (i < arr1.size())
    {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}
int main()
{

    vector<int> arr = {3, 5, 10, 20, 50};
    vector<int> arr2 = {4, 9, 12, 15, 20, 40, 60, 70, 80};
    // [3,4,5,9,10,12,15,20,40,50,60,70,80]
    vector<int> result = merge(arr, arr2);

    // print result
    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}
