/*** Problem Statement No. 560: Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107 ***/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    //Brute Force Method
    int count = 0;
    int subarraySum(vector<int>& nums, int k){
        for(int i =0; i < nums.size(); ++i){
            int sum = 0;
            for(int j = i; j<nums.size(); ++j){
                sum = sum + nums[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<int> arr(5);
    for(int i=0; i < 5; i++){
        cout << "Enter the input number " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << s.subarraySum(arr,6);
    return 0;
}