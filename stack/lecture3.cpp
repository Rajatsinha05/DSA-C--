#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }

    int top = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(top);
}
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, top);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    // insertAtBottom(s, 5);

    print(s);
    cout << "reversed" << endl;
    reverse(s);
    print(s);
    return 0;
}