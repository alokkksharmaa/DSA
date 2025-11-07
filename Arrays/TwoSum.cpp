// #include <iostream>
// using namespace std;

// void TwoSum(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == key)
//             {
//                 cout << "Indices: " << i << ", " << j << endl;
//                 cout << "Values: " << arr[i] << ", " << arr[j] << endl;
//                 return;
//             }
//         }
//     }
// };

// int main()
// {
//     int arr[5] = {2, 3, 4, 1, 72};
//     int key = 5;
//     TwoSum(arr, 5, key);
// }

////USING VECTOR

#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(int nums[], int n, int key){
    for(int i=0; i<n; i++){
        for(int j = i+1; j <n; j++){
            if(nums[i] + nums[j] ==  key){
                return{i,j};
            }
        }
    }
    return {};
}

int main(){
    int nums[] = {3,5,2,4,12,65};
    int n = sizeof(nums)/sizeof(nums[0]);
    int key = 8;


    TwoSum(nums,n , key);

    
    vector<int> result = TwoSum(nums,n , key);

    if(!result.empty()){
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }
}