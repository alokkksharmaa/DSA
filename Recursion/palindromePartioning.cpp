#include <bits/stdc++.h>
using namespace std;

// Given a string s, partition s such that every substring of the partition is a palindrome.
// Return all possible palindrome partitioning of s.

bool isPalindrome(string&s, int start, int end)
{

    while (start <= end)
    {
        if (s[start++] != s[end--]) return false;
    }
    return true;
}

void helper(string&s, int index, vector<string>&path,  vector<vector<string>> &res){

    if(index == s.size()){
        res.push_back(path);
        return;
    }

    for(int i = index; i< s.length(); ++i){
        if(isPalindrome(s, index, i)){
            path.push_back(s.substr(index, i-index+1));
            helper(s, index+1, path , res);
            path.pop_back();
        }
    }
}

int main(){

    string s  = "aab";

    vector<string> path;
    vector<vector<string>> res;


    helper(s, 0, path, res);

    for(auto x : res){
        for(auto print : x) {
            cout << print << " ";
        }
        cout << endl;
    };


    return 0;
}