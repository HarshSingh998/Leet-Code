/*
Question: 9 -> Palindrome Number

Problem Statement:
Given an integer x, return true if it is a palindrome; otherwise, return false.

A palindrome number reads the same from left to right
and right to left.

Example 1:
Input: x = 121
Output: true

Example 2:
Input: x = -121
Output: false

Example 3:
Input: x = 10
Output: false

Constraints:
-2^31 <= x <= 2^31 - 1

Task:
Write a function that checks whether x is a palindrome.

*/




#include <iostream>
using namespace std;

int main() {

    int x;

    cout << "Enter Number : ";
    cin >> x;

    int original = x;
    int reversed = 0;

    if (x < 0) {
        cout << "False" << endl;
        return 0;
    }

    while (x > 0) {

        int digit = x % 10;

        reversed = reversed * 10 + digit;

        x /= 10;
    }

    if (original == reversed) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}
