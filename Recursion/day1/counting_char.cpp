#include <bits/stdc++.h>
using namespace std;

// Recursive Function to count Number of chars
int Count_chars(string str, char c, int s, int e, int ans)
{
    if (s >= e)
        return ans;
    if (str[s] == c)
    {
        ans++;
    }
    return Count_chars(str, c, s + 1, e, ans);
}


int main()
{
    char c;
    string s;
    cout << "Enter a String\n";
    getline(cin, s);
    cout << "Enter the character you want to search in the string\n";
    cin >> c;
    cout << "The number of Characters in the string are : " << Count_chars(s, c, 0, s.size(), 0);
    return 0;
}