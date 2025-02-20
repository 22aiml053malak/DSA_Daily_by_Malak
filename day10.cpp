// // //025
// // //Find maximum lenght of subarray whoese sum is divided by target input


// // #include<iostream>
// // using namespace std;
// // int longestSubArrayWithDiviableK(int a[],int k,int n){
// //     int res = 0;
    
    
// //     for(int i=0;i<n-1;i++){
// //         int sum = 0;
// //         for(int j=i;j<n-1;j++){
// //             sum = (sum + a[j]) % k;
// //             if(sum == 0){
// //                 res = max(res, j - i + 1);

// //         }

// //     }
    

// // }
// // return res;
// // }

// // int main()
// // {
// //     int n;
// //     cout<<"Enter size"<<endl;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>arr[i];
// //         }
// //     int k;
// //     cout<<"Enter k"<<endl;
// //     cin>>k;

// //     cout<<"The sub Array is"<<longestSubArrayWithDiviableK(arr,k,n);
// // }]



// //0026








// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter array elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int r;
//     cout << "Enter r: ";
//     cin >> r;

//     if (r > n) {
//         cout << "Error: r cannot be greater than array size." << endl;
//         return 1;
//     }

//     cout << "Pairs:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < min(i + r, n); j++) {
//             cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
//         }
//     }

//     return 0;
// }
