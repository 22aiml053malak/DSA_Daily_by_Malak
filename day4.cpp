// //010
// //Trapping water problem
// //Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// // Output: 6
// // Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// // Example 2:

// // Input: height = [4,2,0,3,2,5]
// // Output: 9
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     if (n < 2) {
//         cout << "Array size must be at least 2";
//         return 0;
//     }

//     int a[n], diff[n]; 
    
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

    
//     for (int i = 1; i < n - 1; i++) {
//         if (a[i] == 0 || (a[i + 1] - a[i - 1] > 0)) {
//             diff[i] = a[i + 1] - a[i - 1];
//         }
//     }

    
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += diff[i];
//     }

//     cout << sum;
//     return 0;
// }












// // 011
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Input size of the array

//     int nums[n], answer[n];

//     // Input array elements
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//         answer[i] = 1; // Initialize answer array with 1
//     }

//     // Step 1: Compute prefix product
//     int prefix = 1;
//     for (int i = 0; i < n; i++) {
//         answer[i] = prefix;
//         prefix *= nums[i];
//     }

//     // Step 2: Compute suffix product and update answer array
//     int suffix = 1;
//     for (int i = n - 1; i >= 0; i--) {
//         answer[i] *= suffix;
//         suffix *= nums[i];
//     }

//     // Output the result
//     for (int i = 0; i < n; i++) {
//         cout << answer[i] << " ";
//     }

//     return 0;
// }




//012
//Maximum product sub array (optimal)
// #include <iostream>
// using namespace std;

// int maxProductSubarray(int nums[], int n) {
//     int prefix = 1, suffix = 1, maxProduct = nums[0];

//     for (int i = 0; i < n; i++) {
//         if (prefix == 0) prefix = 1;
//         if (suffix == 0) suffix = 1;

//         prefix *= nums[i];  
//         suffix *= nums[n - 1 - i];

//         if (prefix > maxProduct) maxProduct = prefix;
//         if (suffix > maxProduct) maxProduct = suffix;
//     }

//     return maxProduct;
// }

// int main() {
//     int n;
//     cin >> n;  

//     int nums[n];
//     for (int i = 0; i < n; i++) cin >> nums[i];  

//     cout << maxProductSubarray(nums, n) << endl;
//     return 0;
// }
