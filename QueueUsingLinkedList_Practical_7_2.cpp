#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Inserted: " << value << endl;
}

void dequeue()
{
    if (front == NULL)
    {
        cout << "Queue Underflow\n";
        return;
    }

    Node *temp = front;
    cout << "Deleted: " << temp->data << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void display()
{
    if (front == NULL)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node *temp = front;

    cout << "Queue Elements: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice, value;

    while (true)
    {

        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice\n";
        }
    }
}