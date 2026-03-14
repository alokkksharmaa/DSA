#include <iostream>
using namespace std;

// subsequence,
// Ex :- abc  === "" , "a", "b", "c", "ab", "ac", "bc", "abc"
// we either have 2 options either take element or leave


void subsequences(string s, int index, string output){

  if(index == s.length()){
    cout << ""<<  output << "";
    return;
  }

  // took 
  subsequences(s, index+1, output + s[index]);

  subsequences(s, index + 1, output);

}

int main()
{
  string s = "abc";

  subsequences(s, 0 ," ");

  return 0;
}