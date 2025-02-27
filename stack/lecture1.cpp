#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> stk;
    string str = "#ts#mt#node##j";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '#')
        {
            if (stk.size() > 0)
            {
                stk.pop();
            }
        }
        else
        {
            stk.push(str[i]);
        }
    }

    string str2 = "";
    while (!(stk.empty()))
    {
        str2 = stk.top() + str2;
        stk.pop();
    }
    cout << str2 << endl;
    return 0;
}