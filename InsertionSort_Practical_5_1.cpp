#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "\nSorted Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.

Start with the second element as the first element is assumed to be sorted.
Compare the second element with the first if the second is smaller then swap them.
Move to the third element, compare it with the first two, and put it in its correct position
Repeat until the entire array is sorted.
*/