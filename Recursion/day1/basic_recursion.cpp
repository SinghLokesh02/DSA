// A function that calls itself until the required condition meet is known as a recursive function. And, this technique is known as recursion.

/*
Advantages and Disadvantages of Recursion
Recursion makes program elegant. However, if performance is vital, use loops instead as recursion is usually much slower.

That being said, recursion is an important concept. It is frequently used in data structure and algorithms. For example, it is common to use recursion in problems such as tree traversal.

What is a base condition in recursion?
In a recursive function, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems.

The role of the base condition is to stop a recursive function from executing endlessly – once a pre-specified base condition is met, the function knows it’s time to exit.
*/

// Program to print Number upto N using Recursion
#include <bits/stdc++.h>
using namespace std;

// Function to print Number upto N
void print_Upto(int n){
    if(n==-1)return;
    print_Upto(n-1);
    cout<<n<<" ";
}

// Function to Print upto 0 from the specified Number
void print_Upto_0(int n){
    cout<<n<<" ";
    if(n==0)return;
    return print_Upto_0(n-1);
}

int main()
{
    int n;
    cout<<"Enter Any Number\n";
    cin>>n;

    cout<<"Printing upto the specified Number\n";
    print_Upto(n);
    cout<<"\nPrinting upto 0 from the specified Number\n";
    print_Upto_0(n);
    return 0;
}
