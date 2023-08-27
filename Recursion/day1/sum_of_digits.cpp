#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum of digits
int Sum_Of_digits(int n, int ans)
{
    // Base case
    if (n <= 0)
        return ans;
    ans += n % 10;
    n /= 10;
    Sum_Of_digits(n, ans);
}

// Main Function
int main()
{
    int n;
    cout << "Enter any Number\n";
    cin >> n;

    cout << "The sum of digits of the given Number is : " << Sum_Of_digits(n, 0) << endl;

    return 0;
}