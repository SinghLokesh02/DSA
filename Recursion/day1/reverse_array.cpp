#include <bits/stdc++.h>
using namespace std;\

// Recursive Function to reverse the array
void Reverse(int arr[], int s, int e)
{
    if (s >= e)
        return;
    swap(arr[s], arr[e]);
    Reverse(arr, s + 1, e - 1);
}


int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 87};
    Reverse(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}