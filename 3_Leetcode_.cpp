/*
Question: 1281 -> Subtract the Product and Sum of Digits of an Integer

Problem Statement:
Given an integer n, return the difference between the product
of its digits and the sum of its digits.

Example 1:
Input: n = 234
Output: 15

Example 2:
Input: n = 4421
Output: 21

Constraints:
1 <= n <= 10^5

Task:
Calculate the product and sum of all digits of n, then return
product - sum.

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int sum = 0;
    int product = 1;

    while (n > 0) {

        int digit = n % 10;

        sum += digit;
        product *= digit;

        n /= 10;
    }

    int result = product - sum;

    cout << "Product : " << product << endl;
    cout << "Sum : " << sum << endl;
    cout << "Result : " << result << endl;

    return 0;
} 






