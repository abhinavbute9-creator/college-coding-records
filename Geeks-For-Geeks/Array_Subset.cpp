///PROBLEM STATEMENT LINK--> https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&category=Searching&sortBy=submissions
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    bool isSubset(vector<int> &a, vector<int> &b){
        unordered_map <int,int> freq;
        for(int x: a){
            freq[x]++;
        }
        for(int x:b){
            if(freq[x]==0){
                return false;
            }
            freq[x]--;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<int> a(10),b(5);
    cout << "Enter the elements in primary array: ";
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    cout << "Enter the elements in subset of array: ";
    for(int i =0; i<5; i++){
        cin >> b[i];
    }
    cout << s.isSubset(a,b);
    return 0;
}