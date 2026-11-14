/*
Question: 1 -> Two Sum

Problem Statement:
Given an array nums and an integer target, return the indices of two numbers whose sum equals target.

You cannot use the same element twice.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9

Task:
Return the indices of two elements whose sum equals target.

*/



#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, target;

    cout << "Enter Array Size : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter Target : ";
    cin >> target;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                cout << "Indices : " << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}
