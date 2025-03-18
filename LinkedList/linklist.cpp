#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        this->head = nullptr;
    }

    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "=" << temp->next << " ->";
            temp = temp->next;
        }
    }
};
int main()
{
    LinkedList *list = new LinkedList();
    list->insertAtTail(10);
    list->insertAtTail(20);
    list->insertAtTail(30);
    list->insertAtTail(40);
    list->printList();
    return 0;
}