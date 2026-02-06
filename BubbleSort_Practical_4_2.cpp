#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter total number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "\nEnter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "Element " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    int original[n];
    for(int i = 0; i < n; i++)
    {
        original[i] = arr[i];
    }
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "\n\n--- ORIGINAL ARRAY ---\n";
    for(int i = 0; i < n; i++)
    {
        cout << original[i] << " ";
    }
    
    cout << "\n\n--- SORTED ARRAY ---\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n\n";
    return 0;
}