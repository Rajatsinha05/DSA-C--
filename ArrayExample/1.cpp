#include <iostream>
using namespace std;

string linearSearch(int arr[], int length, int target) // O(n)
{
    for (int i = 0; i < length; i++)
        if (target == arr[i])
            return "Number Exist";

    return "Number Not Exist";
}

bool binarySearch(int arr[], int length, int target) // O(log(n))
{
    int left = 0;
    int right = length;

    for (int i = 0; i < length; i++)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
    }
    return false;
}

void sortArray(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void checkPalindrome(string str)
{
    int left = 0;
    int right = 0;
    for (int i = 0; str[i] != NULL; i++)
    {
        right += 1;
    }

    int length = right;

    for (int i = 0; i < length; i++)
    {

        if (str[left] != str[right - 1])
        {
            cout << "Number is Not Palindrome" << endl;
            return;
        }
        left++;
        right--;
    }
    cout << "Number is Palindrome";
}

int main()
{
    char arr[] = {'n', 'a', 'y', 'a', 'a'};

    // string result = linearSearch(arr, 10, 10);
    // cout << result << endl;

    // if (binarySearch(arr, 10, 5))
    // {
    //     cout << "Number Exist";
    // }
    // else
    // {
    //     cout << "Number Not Exist";
    // }

    // sortArray(arr, 8);
    // printArray(arr, 8);

    string str = "racecar";
    string name = "jay";
    checkPalindrome(name);

    return 0;
}