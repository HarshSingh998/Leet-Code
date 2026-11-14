/*
Question: 2235 -> Add Two Integers

Problem Statement:
Given two integers num1 and num2, return their sum.

Example 1:
Input: num1 = 12, num2 = 5
Output: 17

Example 2:
Input: num1 = -10, num2 = 4
Output: -6

Constraints:
-100 <= num1, num2 <= 100

Task:
Write a function that returns the sum of num1 and num2.

*/

#include <iostream>
using namespace std;

int main() {

    int a ;
    cout << "Enter Your First Number : " ;
    cin >> a;

    int b ;
    cout << "Enter Your Second Number : " ;
    cin >> b;

    int sum = a + b ;

    cout << "Sum : " << sum << endl;

    return 0;
}

