#include <iostream>
using namespace std;

void Threesum(int arr[], int n, int key){

    for(int i = 0; i<n-1; i++){
        cout << "I am 1st loop" << endl;
        for(int j = i + 1; j<n-1; j++){
            cout << "I am 2nd loop" << endl;
            for(int k = j+1; k<n-1; k++){
                cout << "I am 3rd loop" << endl;
                if(arr[i]  + arr[j+1] + arr[k+1] == key){
                    cout << "The Key is " << key << endl;
                    cout << "Triplet sum of array " << arr[i] << ", " << arr[j+1] << ", " << arr[k+1] << endl;

                 }
            }
        }
    }
    return;
}

int main(){
    int arr[5] = {3,2,4,1,5};
    
    int key = 9;

    Threesum(arr, 5, key);
}