/*
Question: 342 -> Power of Four

Problem Statement:
Given an integer n, return true if it is a power of four; otherwise, return false.

A power of four is a number that can be expressed as 4^x,
where x is a non-negative integer.

Example 1:
Input: n = 16
Output: true

Example 2:
Input: n = 5
Output: false

Example 3:
Input: n = 1
Output: true

Constraints:
-2^31 <= n <= 2^31 - 1

Task:
Write a function that checks whether n is a power of four.

*/




#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter Number : ";
    cin >> n;

    if (n <= 0) {
        cout << "False" << endl;
        return 0;
    }

    while (n % 4 == 0) {
        n /= 4;
    }

    if (n == 1) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}
