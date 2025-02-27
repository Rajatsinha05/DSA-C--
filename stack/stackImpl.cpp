
#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int index;
    int size;
    Stack(int n)
    {
        this->size = n;
        arr = new int[n];
        index = -1;
    }

    void push(int value)
    {
        if (index < this->size - 1)
        {
            arr[++index] = value;
        }
        else
        {
            cout << "ERROR: stack overflow" << endl;
        }
    }

    void pop()
    {
        if (index != -1)
        {
            arr[index--] = -1;
        }
        else
        {
            cout << "ERROR: stack underflow" << endl;
        }
    }

    void print()
    {
        for (int i = 0; i <= this->index; i++)
        {
            cout << arr[i] << endl;
        }
    }

    int top()
    {
        if (index != -1)
        {
            return arr[index];
        }
        else
        {
            cout << "ERROR: stack underflow" << endl;
        }
    }
    int length()
    {

        return index + 1;
    }

    bool isEmpty()
    {
        // if (index == -1)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        return index == -1;
    }
};

int main()
{

    Stack *stk = new Stack(3);
    // stk->push(10);
    // stk->push(20);
    // stk->push(30);

    // stk->print();
    // stk->pop();
    // cout << "after pop" << endl;
    // stk->print();
    cout << stk->isEmpty();
    return 0;
}