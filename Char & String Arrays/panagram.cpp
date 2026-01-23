#include <iostream>
using namespace std;

bool isPanagram(string &word){

  for(char ch = 'a'; ch <= 'z'; ch++){  
    bool found = false;

    for(int i=0; i<=word.length(); i++){
        if(ch == tolower(word[i])){
          found = true;
          break;
        }
    } 

    if(found == false) return false;
  }
  return true;
}


int main()
{
  string word ="The quick brown fox jumps over the lazy dog";

  
  if(isPanagram(word) == true){
    cout << "true";
  }else{
    cout << "false";
  };


  return 0;
}