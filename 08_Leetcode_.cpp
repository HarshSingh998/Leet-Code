/*
Question: 326 -> Power of Three

Problem Statement:
Given an integer n, return true if it is a power of three; otherwise, return false.

A power of three is a number that can be expressed as 3^x,
where x is a non-negative integer.

Example 1:
Input: n = 27
Output: true

Example 2:
Input: n = 0
Output: false

Example 3:
Input: n = -1
Output: false

Constraints:
-2^31 <= n <= 2^31 - 1

Task:
Write a function that checks whether n is a power of three.

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

    while (n % 3 == 0) {
        n /= 3;
    }

    if (n == 1) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}
