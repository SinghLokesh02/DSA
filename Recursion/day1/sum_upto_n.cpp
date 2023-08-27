#include <bits/stdc++.h>
using namespace std;
int i = 1;

void Sum(int n, int sum)
{
    if (i > n)
    {
        cout << "The sum of Number upto N is : " << sum << endl;
        return;
    }
    sum += i;
    i++;
    return Sum(n, sum);
}

// Functional Recursion
int Sum(int n)
{
    if (n == 1)
        return 1;
    return n + Sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter any Number\n";
    cin >> n;
    // By parameterised Recursion
    Sum(n, 0);

    // By functional Recursion
    cout << "The sum of Number upto N is : " << Sum(n) << endl;

    return 0;
}