/*
Question: 1342 -> Number of Steps to Reduce a Number to Zero

Problem Statement:
Given an integer num, return the number of steps to reduce it to zero.

If num is even, divide it by 2.
If num is odd, subtract 1 from it.

Example 1:
Input: num = 14
Output: 6

Example 2:
Input: num = 8
Output: 4

Example 3:
Input: num = 123
Output: 12

Constraints:
0 <= num <= 10^6

Task:
Count the number of steps required to reduce num to zero.

*/



#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter Number : ";
    cin >> num;

    int steps = 0;

    while (num > 0) {

        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num -= 1;
        }

        steps++;
    }

    cout << "Steps : " << steps << endl;

    return 0;
}
