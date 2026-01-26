#include <bits/stdc++.h>
using namespace std;

bool areEqual(string str, string str1){
  int n1 = str.length();
  int n2 = str1.length();

  if(n1 != n2)  return false;

  // sort both the string
  sort(str.begin(), str.end());
  sort(str1.begin(), str1.end());


  for(int i=0;i<n1 || n2; i++){
    if(str[i]  != str1[i]) return false;
  }
  return true;
}


int main()
{
  string str = "ttr";
  string str1 = "trtr";

  if(areEqual(str, str1)){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}