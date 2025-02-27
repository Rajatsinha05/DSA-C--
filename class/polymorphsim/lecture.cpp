#include <iostream>
using namespace std;

class CalC
{
public:
    CalC()
    {
    }
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    double sum(double a, double b)
    {
        return a + b;
    }
    virtual void print()
    {
        cout << "inside calc" << endl;
    }
};

class Calculation : public CalC
{

public:
    Calculation() : CalC()
    {
    }

    void print() override
    {
        cout << "calculation" << endl;
    }
};

int main()
{

    // CalC *cal = new CalC();
    // cout << cal->sum(10, 20, 30) << endl;
    Calculation *cal = new Calculation();
    // cout << cal->print() << endl;
    cal->print();
    return 0;
}