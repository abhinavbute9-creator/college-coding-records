/***Problem Statement No. 286 : Find the Duplicate Number
 Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [3,3,3,3,3]
Output: 3
 

Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.
 

Follow up:

How can we prove that at least one duplicate number must exist in nums?
Can you solve the problem in linear runtime complexity?***/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        for(auto x: freq){
            if(x.second>1){
                return x.first;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> arr(5);
    for(int i=0; i < 5; i++){
        cout << "Enter the input number " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << s.findDuplicate(arr);
    return 0;
}