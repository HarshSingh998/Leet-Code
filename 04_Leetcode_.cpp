/*
Question: 263 -> Ugly Number

Problem Statement:
An ugly number is a positive integer whose prime factors are only 2, 3, and 5.

Given an integer n, return true if n is an ugly number;
otherwise, return false.

Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 * 3

Example 2:
Input: n = 1
Output: true
Explanation: 1 has no prime factors.

Example 3:
Input: n = 14
Output: false
Explanation: 14 contains the prime factor 7.

Constraints:
-2^31 <= n <= 2^31 - 1

Task:
Write a function that checks whether n is an Ugly Number.

*/



#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter Number : ";
    cin >> n;

    if (n <= 0) {
        cout << "Not an Ugly Number" << endl;
        return 0;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    while (n % 5 == 0) {
        n /= 5;
    }

    if (n == 1) {
        cout << "Ugly Number" << endl;
    }
    else {
        cout << "Not an Ugly Number" << endl;
    }

    return 0;
}
