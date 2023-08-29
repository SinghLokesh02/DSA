// Given a positive integer n, find the nth fibonacci number.

// In fibonacci Series we use N recursive Call
#include <bits/stdc++.h>
using namespace std;

// Recursive function to print fibonacci Number
int nthFibonacci(int n)
{
    if (n <= 1)
        return n;
    return nthFibonacci(n - 2) + nthFibonacci(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number to get nth fibonacci Number\n";
    cin >> n;
    cout << nthFibonacci(n) << endl;
    return 0;
}
// git remote add origin git@github.com:SinghLokesh02/DSA.git
// git branch -M main
// git push -u origin main