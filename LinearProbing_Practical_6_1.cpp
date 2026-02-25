#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

void init() {
    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

int hashFunction(int key) {
    return key % SIZE;
}

void insertKey(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    int i = 0;

    while(hashTable[index] != -1) {
        cout << "Collision at index " << index << endl;
        i++;
        index = (originalIndex + i) % SIZE;
        if(i == SIZE) {
            cout << "Hash Table is Full" << endl;
            return;
        }
    }

    hashTable[index] = key;
}

void display() {
    for(int i = 0; i < SIZE; i++) {
        cout << "Index " << i << " : ";
        if(hashTable[i] != -1)
            cout << hashTable[i];
        else
            cout << "Empty";
        cout << endl;
    }
}

int main() {
    int n, key;
    init();
    cout << "Enter number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter key: ";
        cin >> key;
        insertKey(key);
    }
    display();
    return 0;
}