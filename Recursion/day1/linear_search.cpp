// Array Search: Implement a recursive function to search for an element in an array.

#include <bits/stdc++.h>
using namespace std;

// Recursive function to search element in the Array
int Arr_search(int arr[], int s, int n, int x)
{
    if (s >= n)
        return 0;
    if (arr[s] == x)
        return s;
    return Arr_search(arr, s + 1, n, x);
}

// Function to print the array Recursively
void print_Arr(int arr[], int n, int s)
{
    if (s >= n)
        return;
    cout << arr[s] << " ";
    print_Arr(arr, n, s + 1);
}

int main()
{
    int n, x;
    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element for search in the array\n";
    cin >> x;
    cout << "The elements in the array are : \n";
    print_Arr(arr, n, 0);
    cout << endl;
    if (Arr_search(arr, 0, n, x) == 0)
    {
        cout << "\n\nThe element not found in the Index\n";
    }
    else
    {
        cout << "\n\nThe element found at index : " << Arr_search(arr, 0, n, x) << endl;
    }
    return 0;
}