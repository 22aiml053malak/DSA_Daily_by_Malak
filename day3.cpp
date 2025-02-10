// //007

// //Next permutation problem
// //We need to print the next lexical order of given permutation
// //So to Find the next order we will see patterns behind this problem
// //we will solve this into three steps
// // Example 1:

// // Input: nums = [1,2,3]
// // Output: [1,3,2]
// // Example 2:

// // Input: nums = [3,2,1]
// // Output: [1,2,3]
// // Example 3:

// // Input: nums = [1,1,5]
// // Output: [1,5,1]

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//     //step -1 find pivot where the righ element will be greater then it.
//     int pivot = -1;
//     for(int i=n-2;i>0;i--){
//         if(arr[i]<arr[i+1]){
//             pivot = i;
//             break;
//         }
//     }
    
//     //step -2 find element whom with pivot will swap to make the next number
//     for(int i=n-1;i>pivot;i--){
//         if(arr[i]>arr[pivot]){
//             swap(arr[i],arr[pivot]);
//             break;
//             }
//     }

//     //step 3 reverse the remainning array to make a smaller number
//     int start = pivot+1;
//     int end = n-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//         }
    
//         //step 4 print array
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//             }

// }








// //008
// // You are given an array prices where prices[i] is the price of a given stock on the ith day.

// // You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// // Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// // Example 1:

// // Input: prices = [7,1,5,3,6,4]
// // Output: 5
// // Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// // Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// // Example 2:

// // Input: prices = [7,6,4,3,1]
// // Output: 0
// // Explanation: In this case, no transactions are done and the max profit = 0.
 

// // Constraints:

// // 1 <= prices.length <= 105
// // 0 <= prices[i] <= 104
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

    
//     int min = arr[0], min_index = 0;
//     for (int i = 1; i < n; i++) { 
//         if (arr[i] < min) {
//             min = arr[i];
//             min_index = i;
//         }
//     }

 
//     int max = min;
//     for (int i = min_index; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

    
//     int profit = max - min;

    
//     cout << "Max Profit: " << profit << endl;

//     return 0;
// }



// //009
// //Find kth largest number
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    
//     cin >> k;

//     priority_queue<int, vector<int>, greater<int>> minHeap;

//     for (int i = 0; i < n; i++) {
//         minHeap.push(a[i]);
//         if (minHeap.size() > k) {
//             minHeap.pop(); // Remove smallest element
//         }
//     }

//     cout << "The " << k << "th largest element is: " << minHeap.top() << endl;

//     return 0;
// }
