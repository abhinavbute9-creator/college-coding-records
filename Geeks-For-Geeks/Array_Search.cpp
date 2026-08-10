///PROBLEM STATEMENT LINK--> https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&category=Searching&sortBy=submissions

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int result(vector<int> &arr, int x){
      int n = arr.size();
      for(int i =0; i<n; i++){
        if(arr[i]==x){
            return i;
          }
       }
       return -1;
    }
};

int main(){
    Solution s;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element you want to search in array: ";
    cin >> x;

    cout << s.result(arr,x);

    return 0;
}