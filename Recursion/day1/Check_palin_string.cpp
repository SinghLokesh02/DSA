#include <bits/stdc++.h>
using namespace std;

// Recursive Function to Check Palindrome
bool check_Palindrome(string str, int s, int e)
{
    // Base case: If the substring has 0 or 1 characters, it's a palindrome
    if (s >= e)
        return 1;
    // Compare characters at start and end positions
    if (str[s] == str[e])
    {
    // Recursively check the substring without the first and last characters
        return check_Palindrome(str, s + 1, e - 1);
    }
    return 0;
}

int main()
{
    string str;
    cout << "Enter a String\n";
    cin >> str;
    cout << str.size() << endl;
    if (check_Palindrome(str, 0, str.size() - 1))
    {
        cout << "The given String is Palindrome\n";
    }
    else
    {
        cout << "The given String is not Palindrome\n";
    }

    return 0;
}