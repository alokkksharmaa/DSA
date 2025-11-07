#include <iostream>

using namespace std;

void TwoSum(int arr[], int n , int key){
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] ==  key){
                cout << "Indices: " << i << ", " << j << endl;
                cout << "Values: " << arr[i] << ", " << arr[j] << endl;
                return;
            }
        }
    }
};

int main(){
    int arr[5] = {2,3,4,1,72};
    int key = 5;
    TwoSum(arr, 5, key);
}