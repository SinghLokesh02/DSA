// Merge Sort Using Recursion
/*
Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

In simple terms, we can say that the process of merge sort is to divide the array into two halves, sort each half, and then merge the sorted halves back together. This process is repeated until the entire array is sorted.

How does Merge Sort work?
Merge sort is a recursive algorithm that continuously splits the array in half until it cannot be further divided i.e., the array has only one element left (an array with one element is always sorted). Then the sorted subarrays are merged into one sorted array.
*/
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> temp(high + 1);
    int left = low, right = mid + 1;
    int i = low;
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp[i++] = nums[left++];
        }
        else
        {
            temp[i++] = nums[right++];
        }
    }
    while (left <= mid)
    {
        temp[i++] = nums[left++];
    }
    while (right <= high)
    {
        temp[i++] = nums[right++];
    }
    // Copying all the element from temp array to real array
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i];
    }
}
void MergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    MergeSort(nums, low, mid);
    MergeSort(nums, mid + 1, high);
    Merge(nums, low, mid, high);
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

    MergeSort(nums, 0, n - 1);
    cout << "Printing the array After Sorting\n\n";
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
    return 0;
}

// Merge Sort Using Static Array

/*
// Merge Sort Using Recursion

#include <bits/stdc++.h>
using namespace std;

void Merge(int nums[], int low, int mid, int high)
{
    int temp[high + 1];
    int left = low, right = mid + 1;
    int i = left;
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp[i++] = nums[left++];
        }
        else
        {
            temp[i++] = nums[right++];
        }
    }
    while (left <= mid)
    {
        temp[i++] = nums[left++];
    }
    while (right <= high)
    {
        temp[i++] = nums[right++];
    }
    // Copying all the element from temp array to real array
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i];
    }
}
void MergeSort(int nums[], int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    MergeSort(nums, low, mid);
    MergeSort(nums, mid + 1, high);
    Merge(nums, low, mid, high);
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Printing the array before sorting
    cout << "Printing the array Before Sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    MergeSort(nums, 0, n - 1);
    cout << "Printing the array After Sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

*/