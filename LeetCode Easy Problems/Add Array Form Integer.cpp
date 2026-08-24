/***Problem Statement 989:
 The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

 

Example 1:

Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
Example 2:

Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455
Example 3:

Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021
 

Constraints:

1 <= num.length <= 104
0 <= num[i] <= 9
num does not contain any leading zeros except for the zero itself.
1 <= k <= 104 ***/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        int carry = 0;
        while(n>=0||k>0||carry>0){
            int kDigit = k %10;
            k = k/10;

            int value = carry + kDigit;
            if(n>=0){
                value += num[n];
            }
            if(n>=0){
                num[n] = value%10;
            }else{
                num.insert(num.begin(),value%10);
            }
            carry = value/10;
            n--;
        }
        for(int i = 0; i < 6; i++){
        cout << num[i] << " ";
        }
        return num;
    }
};

int main(){
    Solution s;
    vector<int> num(6);
    for(int i = 0; i < 6; i++){
        cout << "Enter the element at the index " << i << " : ";
        cin >> num[i];
    }
    s.addToArrayForm(num,245);
    return 0;
}