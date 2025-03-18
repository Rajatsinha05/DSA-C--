#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 5, 5, 61, 2, 1, 3, 3, 23, 2, 1, 2, 1};
    set<int> val;

    for (int x : numbers)
    {
        val.insert(x);
    }

    for (int x : val)
    {
        cout << x << " ";
    }
    // cout <<  << endl;
    // cout << val.begin() << endl;
    return 0;
}