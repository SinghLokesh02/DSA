#include <bits/stdc++.h>
using namespace std;

void print_Name(string name, int n)
{
    if (n == 0)
        return;
    cout << name << " ";
    print_Name(name, n - 1);
}

int main()
{
    // Question - 1 print your name N times using Recursion
    string name;
    cout << "ENter Your Name\n";
    cin >> name;
    int n;
    cout << "ENter the Number of times you want to print your name\n";
    cin >> n;
    print_Name(name, n);

    return 0;
}