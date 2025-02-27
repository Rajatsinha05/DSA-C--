#include <iostream>
using namespace std;

class Add
{
public:
    int a;
    int b;
    Add(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    int sum()
    {
        return this->a + this->b;
    }
};

class AddSub : public Add
{
public:
    int a;
    int b;
    AddSub(int a, int b) : Add(a, b)
    {
        // super(a,b);
        this->a = a;
        this->b = b;
    }

    int sub()
    {
        return this->a - this->b;
    }
};

int main()
{

    Add add(1, 2);
    // cout << add.sum() << endl;

    AddSub addsub(20, 10);
    cout << addsub.sub() << endl;
    cout << addsub.sum() << endl;
    return 0;
}