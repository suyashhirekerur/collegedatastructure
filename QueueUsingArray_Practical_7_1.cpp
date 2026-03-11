#include <iostream>
using namespace std;

#define MAX 5

class Queue
{
    int arr[MAX];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == MAX - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = x;

        cout << "Inserted: " << x << endl;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;
        front++;
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    int choice, value;

    while (1)
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
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice\n";
        }
    }
}