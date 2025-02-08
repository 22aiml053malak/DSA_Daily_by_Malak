// //Problem Number 001


// // Maximum and minimum of an array using minimum number of comparisons
// // nput: arr[] = {3, 5, 4, 1, 9}
// // Output: Minimum element is: 1
// //               Maximum element is: 9


// // Input: arr[] = {22, 14, 8, 17, 35, 3}
// // Output:  Minimum element is: 3
// //               Maximum element is: 35

// #include<iostream>
// using namespace std;
// int Min(int arr[],int n){
//     int min = arr[0];
//     for(int i=0;i<n;i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }else{
        
//         }
//     }
//     return min;

// }

// int Max(int arr[],int n){
//     int max = arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
        
       
        
//     }
//      return max;

// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
    
//     for(int i=0;i<n;i++){
//     cin>>a[i];
//     }
//     cout<<"Min ele is:"<<Min(a,n)<<endl;
//     cout<<"Max ele is:"<<Max(a,n)<<endl;
    
    
//   return 0;
// }








// //Problem number 002
// // Array Reverse
// // Input: arr[] = {1, 4, 3, 2, 6, 5}  
// // Output: {5, 6, 2, 3, 4, 1}
// // Explanation: The first element 1 moves to last position, the second element 4 moves to second-last and so on.


// // Input: arr[] = {4, 5, 1, 2} 
// // Output: {2, 1, 5, 4}
// // Explanation: The first element 4 moves to last position, the second element 5 moves to second last and so on.

// #include<iostream>
// using namespace std;

// int reverse_Arr(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         // arr[start] = arr[start] + arr[end];
//         // arr[end] = arr[start] - arr[end];
//         // arr[start] = arr[start] - arr[end];
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//         reverse_Arr(arr,n);
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//             }
//             return 0;
//             }








// //Problem Number 003
// //MAXIMUM SUBARRAY



// // Given an integer array nums, find the 
// // subarray
// //  with the largest sum, and return its sum.

 

// // Example 1:

// // Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// // Output: 6
// // Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// // Example 2:

// // Input: nums = [1]
// // Output: 1
// // Explanation: The subarray [1] has the largest sum 1.
// // Example 3:

// // Input: nums = [5,4,-1,7,8]
// // Output: 23
// // Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
// // Kadanes Algorithm
// #include<iostream>
// #include<vector>
// using namespace std;

// int MaxSub(vector <int>a,int n){
//     int max = a[0];
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum = sum + a[i];
//         if(sum > max){
//             max = sum;
//             }
//             if(sum < 0){
//                 sum = 0;
//                 }
//                 }
//                 return max;


// }

// int main(){
//     int n;
//     cin>>n;
//     int values;

//     vector <int> a;
//     for(int i=0;i<n;i++){
//         cin>>values;
//         a.push_back(values);
    
// }
// cout<<"The Maximum SubArray is:"<<MaxSub(a,n);

// }







// //Problem 04
// //Contains Duplicate True or False
// // Given an integer array nums, find the 
// // subarray
// //  with the largest sum, and return its sum.

 

// // Example 1:

// // Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// // Output: 6
// // Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// // Example 2:

// // Input: nums = [1]
// // Output: 1
// // Explanation: The subarray [1] has the largest sum 1.
// // Example 3:

// // Input: nums = [5,4,-1,7,8]
// // Output: 23
// // Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.



// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to merge two halves
// void merge(vector<int>& arr, int left, int mid, int right) {
//     int n1 = mid - left + 1;  // Size of left subarray
//     int n2 = right - mid;      // Size of right subarray

//     // Create temporary arrays
//     vector<int> leftArr(n1), rightArr(n2);

//     // Copy data to temp arrays
//     for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
//     for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

//     int i = 0, j = 0, k = left;  // Initial indexes

//     // Merge the temp arrays back into arr
//     while (i < n1 && j < n2) {
//         if (leftArr[i] <= rightArr[j]) {
//             arr[k++] = leftArr[i++];
//         } else {
//             arr[k++] = rightArr[j++];
//         }
//     }

//     // Copy remaining elements of leftArr[], if any
//     while (i < n1) arr[k++] = leftArr[i++];

//     // Copy remaining elements of rightArr[], if any
//     while (j < n2) arr[k++] = rightArr[j++];
// }

// // Recursive function to implement Merge Sort
// void mergeSort(vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;  // Find the middle index

//         mergeSort(arr, left, mid);  // Sort first half
//         mergeSort(arr, mid + 1, right);  // Sort second half

//         merge(arr, left, mid, right);  // Merge the sorted halves
//     }
// }

// // Function to check if the array contains duplicates
// bool containsDuplicate(vector<int>& nums) {
//     int n = nums.size();

//     // Step 1: Sort the array using Merge Sort
//     mergeSort(nums, 0, n - 1);

//     // Step 2: Check for consecutive duplicates in sorted array
//     for (int i = 1; i < n; i++) {
//         if (nums[i] == nums[i - 1]) return true;  // Found duplicate
//     }
    
//     return false;  // No duplicates found
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) cin >> nums[i];

//     // Check for duplicates
//     if (containsDuplicate(nums))
//         cout << "true" << endl;  // Duplicate found
//     else
//         cout << "false" << endl;  // No duplicates

//     return 0;
// }




// //Problem number 005
// //Chocolate Distribution Problem
// //Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3 
// // Output: 2 
// // Explanation: If we distribute chocolate packets {3, 2, 4}, we will get the minimum difference, that is 2. 


// // Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 5 
// // Output: 7
// // Explanation: If we distribute chocolate packets {3, 2, 4, 9, 7}, we will get the minimum difference, that is 9 – 2 = 7. 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int m;
//     cin>>m;



//     for(int i=0;i<n;i++){

//         for(int j=0;j<n;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);

//             }

//         }

//     }
//     cout<<"Min Diffrence"<< a[m-1] - a[0] <<endl;
   
// }