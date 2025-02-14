//018

// //Pair Sum in a Sorted and Rotated Array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//     int target;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<"True";
//                 break;
//         }
        
        

//     }
// }}





// //019


// //Kth smallest number
// #include <iostream>
// #include <queue>
// using namespace std;

// int kthSmallest(int arr[], int n, int k) {
//     priority_queue<int> maxHeap;

//     for (int i = 0; i < n; i++) {
//         maxHeap.push(arr[i]);
//         if (maxHeap.size() > k)
//             maxHeap.pop();
//     }

//     return maxHeap.top();
// }

// int main() {
//     int n, k;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cin >> k;
//     cout << kthSmallest(arr, n, k);

//     return 0;
// }
