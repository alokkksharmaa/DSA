#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int start, int end){
    while(start <= end){
        if(s[start++] != s[end--]) return false;
    }
    return true;
}

void helper(string &s, int index,
            vector<string> &path,
            vector<vector<string>> &res){

    if(index == s.size()){
        res.push_back(path);
        return;
    }

    for(int i = index; i < s.size(); i++){
        if(isPalindrome(s, index, i)){
            path.push_back(s.substr(index, i - index + 1));
            helper(s, i + 1, path, res);
            path.pop_back();
        }
    }
}

int main(){

    string s = "aab";

    vector<vector<string>> res;
    vector<string> path;

    helper(s, 0, path, res);

    for(auto x : res){
      for(string print : x){
        cout << print <<  " " ;
      }
    }

    return 0;
}