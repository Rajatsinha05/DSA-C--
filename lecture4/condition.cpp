#include <iostream>
using namespace std;
int main()
{
    // string course_a = "Full Stack";
    // string course_b = "Frontend";
    // string course_c = "Backend";

    // char selected;
    // cout << "enter course, (a,b,c)" << endl;
    // cin >> selected;

    // if (selected == 'a')
    // {
    //     cout << "you have selected Full Stack";
    // }
    // else if (selected == 'b')
    // {
    //     cout << "you have selected FrontEnd";
    // }
    // else if (selected == 'c')
    // {
    //     cout << "you have selected Backend";
    // }
    // else
    // {
    //     cout << "you have selected invalid course" << endl;
    // }

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "a is the max value";
    }
    else if (b > a && b > c)
    {
        cout << "b is the max value";
    }
    else if (c > a && c > b)
    {
        cout << "c is the max value";
    }
    else
    {
        cout << "a,b & c are same values";
    }

    return 0;
}