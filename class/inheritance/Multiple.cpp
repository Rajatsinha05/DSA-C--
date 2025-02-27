#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int a)
    {
        this->a = a;
    }

    void printA()
    {
        cout << "class a" << a << endl;
    }
};

class B
{
public:
    int a;
    B(int a)
    {
        this->a = a;
    }

    void printB()
    {
        cout << "class a" << a << endl;
    }
};

class C : public A, public B
{
public:
    C(int a) : A(a), B(a)
    {
    }

    void printC()
    {
        cout << "class c" << endl;
    }
};

int main()
{

    // C c(10);
    // c.printA();
    A class_a(10);
    // cout <<c.a<< endl;
    // class_a.printA();
    class_a.a = 20;
    cout << class_a.a << endl;
    return 0;
}