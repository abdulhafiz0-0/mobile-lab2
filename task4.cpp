#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Q1: Check palindrome
bool isPalindrome(const string& str) {
    return equal(str.begin(), str.begin() + str.size()/2, str.rbegin());
}

// Q2: Argument passing
/*
C++:
Pass-by-value: copies argument, no change to caller.
Pass-by-pointer: passes pointer, can modify original.
Pass-by-reference: passes alias, can modify original.
Java:
Always pass-by-value.
Primitives: copies value.
Objects: copies reference, can modify object but not reassign caller’s reference
*/

// Q3: Overloading
/*
functions with same name but different parameter types/count.
return type alone can’t overload.
*/

// Q4: Recursion
/*
function calls itself.
base case stops recursion to prevent infinite calls.
*/


