#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end)
{
    if (start >= end)
        return;

    swap(s[start], s[end]);
    reverse(s, start + 1, end - 1);
}

int main()
{
    string s;
    cout << "Enter Any String\n";
    cin >> s;
    cout << "Printing the string before Reversing\n";
    cout << s << endl;
    reverse(s, 0, s.size() - 1);
    cout << "Printing the string After Reversing\n";
    cout << s << endl;
    return 0;
}