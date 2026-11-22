/*
Question: 509 -> Fibonacci Number

Problem Statement:
Given an integer n, calculate the nth Fibonacci number.

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2)

Example 1:
Input: n = 2
Output: 1

Example 2:
Input: n = 3
Output: 2

Example 3:
Input: n = 4
Output: 3

Constraints:
0 <= n <= 30

Task:
Write a function that returns the nth Fibonacci number.


*/




#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter Number of Terms : ";
    cin >> n;

    int a = 0;
    int b = 1;

    if (n == 0) {
        cout << "Fibonacci Number : " << a << endl;
    }
    else if (n == 1) {
        cout << "Fibonacci Number : " << b << endl;
    }
    else {

        int c;

        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        cout << "Fibonacci Number : " << b << endl;
    }

    return 0;
}
