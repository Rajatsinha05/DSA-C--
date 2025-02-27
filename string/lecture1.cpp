#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    // string str2;
    // // for (int i = str.length() - 1; i >= 0; i--)
    // // {
    // //     str2 += str[i];
    // // }
    // for (char c : str)
    // {
    //     str2 = c + str2;
    // }
    // return str2 == str;
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

void Gensubstring(string str)
{
    int max = -1;
    for (int i = 0; i < str.length(); i++)
    {
        string substr = "";
        for (int j = i; j < str.length(); j++)
        {
            substr += str[j];
            bool result = isPalindrome(substr);
            if (result)
            {
                int curr = substr.length();
                if (curr > max)
                {
                    max = curr;
                }
            }
        }
    }

    cout << max << endl;
}

int main()
{
    string str = "nayan";
    string str2 = "nnyaa";
    string str3 = "xyzxy";
    Gensubstring(str);
    // bool result = isPalindrome(str);
    // cout << result << endl;

    // int count = 0;

    // for (char c : str)
    // {
    //     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    //     {
    //     }
    //     else
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;

    // string str2 = "full";
    // if (str == str2)
    // {
    //     cout << "same" << endl;
    // }
    // else
    // {
    //     cout << " not same" << endl;
    // }

    // int n = str.length();

    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i] << "-";
    // }
    // for (char c : str)
    // {
    //     cout << c << "";
    // }

    return 0;
}