#include <bits/stdc++.h>
using namespace std;
// Recursive function to print the sum of Array Elements
int Print_Arr_sum(int arr[], int s, int n, int ans)
{
    if (s >= n)
        return ans;
    ans += arr[s];
    return Print_Arr_sum(arr, s + 1, n, ans);
}

// Function to print the array recursively
void print_Arr(int arr[], int n, int s)
{
    if (s >= n)
        return;
    cout << arr[s] << " ";
    print_Arr(arr, n, s + 1);
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print_Arr(arr, n, 0);

    cout << "The sum of array Elements is : " << Print_Arr_sum(arr, 0, n, 0) << endl;

    return 0;
}