/***Problem Statement 3718:
 Given an integer array nums and an integer k, return the smallest positive multiple of k that is missing from nums.
A multiple of k is any positive integer divisible by k.

Example 1:

Input: nums = [8,2,3,4,6], k = 2

Output: 10

Explanation:

The multiples of k = 2 are 2, 4, 6, 8, 10, 12... and the smallest multiple missing from nums is 10.

Example 2:

Input: nums = [1,4,7,10,15], k = 5

Output: 5

Explanation:

The multiples of k = 5 are 5, 10, 15, 20... and the smallest multiple missing from nums is 5.

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
1 <= k <= 100
***/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int mul = k;
        int n = nums.size();
        while(true){
            bool found = false;
            for(int i =0; i < n; i++){
                if(nums[i]==mul){
                    found = true;
                    break;
                }
            }
            if(found){
                mul +=k;
            }else{
                return mul;
            }
        }
    }
};

int main(){
    Solution s;
    vector<int> num(6);
    for(int i = 0; i < 6; i++){
        cout << "Enter the element at the index " << i << " : ";
        cin >> num[i];
    }
    s.missingMultiple(num,4);
    return 0;
}