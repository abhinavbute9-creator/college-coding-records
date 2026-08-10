#include<iostream>
using namespace std;

class Solution{
    public:
    int unique(string s){
        for(int i = 0; i < s.length(); i++){
            bool same = false;
            for(int j = 0; j < s.length(); j++){
                if( i!=j && s[i] == s[j]){
                    same = true;
                    break;
                }
            }
            if(!same)
            return i;
        }
        return -1;
    }
};

int main(){
    Solution s;
    string word;
    cout << "Enter a word: ";
    getline(cin,word);
    cout << s.unique(word);

    return 0;
}