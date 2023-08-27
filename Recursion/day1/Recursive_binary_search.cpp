// Recursive Binary Search

#include <bits/stdc++.h>
using namespace std;
int Arr_Binsearch(int arr[], int s, int n, int x)
{
    if (n >= s)
    {
        int mid = s + (n - s) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return Arr_Binsearch(arr, s, mid - 1, x);

        return Arr_Binsearch(arr, mid + 1, n, x);
    }
    return -1;
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
    cout << "The elements in the array are : \n";
    print_Arr(arr, n, 0);
    cout << endl;
    cout << "Enter the Element for search in the array\n";
    cin >> x;
    if (Arr_Binsearch(arr, 0, n - 1, x) == -1)
    {
        cout << "\n\nThe element not found in the Index\n";
    }
    else
    {
        cout << "\n\nThe element found at index : " << Arr_Binsearch(arr, 0, n - 1, x) << endl;
    }
    return 0;
}