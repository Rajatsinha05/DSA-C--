#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
    }
    void print(int x)
    {
        cout << x << endl;
    }

    virtual int sum(int x, int y) = 0;
};

class B : public A
{
public:
    B() : A()
    {
    }
    int sum(int x, int y)
    {
        return x + y;
    }
};

int main()
{
    A *a = new B();
    cout << a->sum(20, 30) << endl;
    return 0;
}