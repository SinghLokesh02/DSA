/*
QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

How does QuickSort work?
The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot.

Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.
*/

#include <bits/stdc++.h>
using namespace std;

// Find the index of the every element to be putted in the array
int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];
    int i = low, j = high;
    while (i < j)
    {
        while (nums[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (nums[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
}

// Recursive Quicksort Function
void Quicksort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int p_index = partition(nums, low, high);
        Quicksort(nums, low, p_index - 1);
        Quicksort(nums, p_index + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Printing the array before sorting
    cout << "Printing the array Before Sorting\n\n";
    for (auto i : nums)
        cout << i << " ";
    cout << endl;

    Quicksort(nums, 0, n - 1);

    cout << "Printing the array After Sorting\n\n";
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
    return 0;
}

// n = 8
// 4 6 2 5 7 9 1 3
// ans = 1 2 3 4 5 6 7 9