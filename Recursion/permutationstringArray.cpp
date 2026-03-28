#include <bits/stdc++.h> 
using namespace std;

void swap(char *x , char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void getPermutation(char *a, int left, int right) {

    int i;
    if(left == right){
      cout << a << endl;
    }else{
      for(int i= left; i <= right; i++){
        swap( (a+left), a[right]);
        getPermutation(a, left+1, right);
        swap((a+left), (a+i));
      }
    }
}
int main()
{
  char str[] = "ABC"; 
	int n = strlen(str);

  getPermutation(str, 0, n-1);

  
  return 0;
};
