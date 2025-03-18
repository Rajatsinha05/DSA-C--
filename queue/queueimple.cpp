
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
        if (this->front != -1 && this->rear != -1)
        {
            if (this->front < this->rear)
            {
                arr[this->front++] = -1;
            }
            else
            {
                arr[this->front] = -1;
                this->front = -1;
                this->rear = -1;
            }
        }
    }
    void print()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    int getfront()
    {
        // cout << arr[front];
        if (this->front != -1)
        {

            return arr[front];
        }
        else
        {
            cout << "queue is empty and underflow" << endl;
            return -1;
        }
    }

    int getrear()
    {
        return arr[rear];
    }
    int length()
    {
        if (this->front == -1 && this->rear == -1)
        {
            return 0;
        }
        return this->rear - this->front + 1;
    }
};

int main()
{

    Queue *queue = new Queue(5);
    queue->enQueue(10);
    queue->enQueue(20);
    queue->enQueue(30);

    //    queue->front();
    cout << queue->getfront() << endl;
    // cout << queue->getrear() << endl;
    queue->dequeue();
    queue->dequeue();
    // queue->dequeue();
    cout << queue->getfront() << endl;
    cout << queue->length() << endl;

    queue->print();
    return 0;
}