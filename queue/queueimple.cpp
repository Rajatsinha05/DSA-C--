
#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }
    void enQueue(int val)
    {

        if (this->front == -1 && this->rear == -1)
        {
            arr[++this->rear] = val;
            this->front++;
        }
        else
        {
            arr[++this->rear] = val;
        }
    }

    int dequeue()
    {
        }

    void front()
    {
        // cout << arr[front];
        // return arr[front];
    }

    int rear()
    {
        return arr[rear];
    }
};

int main()
{

    Queue *queue = new Queue(5);
    queue->enQueue(10);
    queue->enQueue(20);

    //    queue->front();

    return 0;
}