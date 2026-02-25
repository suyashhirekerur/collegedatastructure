#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter stack size: ";
    cin >> size;

    int* stack = new int[size];  
    int top = -1;
    int choice, value;

    do {
        cout << "\nEnter your choice (1-Push  2-Pop  3-Display  4-Exit): ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (top == size - 1) {
                cout << "Stack Overflow\n";
            }
            else {
                cout << "Enter value: ";
                cin >> value;
                top++;
                stack[top] = value;
                cout << "Element pushed\n";
            }
            break;

        case 2:
            if (top == -1) {
                cout << "Stack Underflow\n";
            }
            else {
                cout << "Popped element: " << stack[top] << endl;
                top--;
            }
            break;

        case 3:
            if (top == -1) {
                cout << "Stack is empty\n";
            }
            else {
                cout << "Stack elements: ";
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }
            break;

        case 4:
            cout << "Exit\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}