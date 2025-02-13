// // //012

// // //Find maximum product sum in sub array

// // // #include <iostream>
// // // #include <algorithm>
// // // using namespace std;

// // // int main() {
// // //     int n;
// // //     cin >> n;
// // //     int a[n];
    
// // //     for (int i = 0; i < n; i++) {
// // //         cin >> a[i];
// // //     }

// // //     int maxProduct = a[0];  

// // //     for (int i = 0; i < n; i++) {
// // //         int product = 1;
// // //         for (int j = i; j < n; j++) {
// // //             product = product * a[j];  
// // //             maxProduct = max(maxProduct, product); 
// // //         }
// // //     }

// // //     cout << "Maximum product subarray sum: " << maxProduct << endl;
// // //     return 0;
// // // }



// // //013
// // //Find minimum in roated sorted array
// // #include <iostream>
// // using namespace std;

// // int findMin(int arr[], int s, int e) {
// //     if (s == e) return arr[s]; // Only one element left

// //     if (arr[s] < arr[e]) return arr[s]; // Already sorted case

// //     int mid = s + (e - s) / 2;

// //     // Check if mid+1 is the minimum
// //     if (mid < e && arr[mid] > arr[mid + 1])
// //         return arr[mid + 1];

// //     // Check if mid itself is the minimum
// //     if (mid > s && arr[mid] < arr[mid - 1])
// //         return arr[mid];

// //     // Decide whether to go left or right
// //     if (arr[mid] >= arr[s])
// //         return findMin(arr, mid + 1, e);
// //     else
// //         return findMin(arr, s, mid - 1);
// // }

// // int main() {
// //     int n;
// //     cout << "Enter the size of array: ";
// //     cin >> n;
// //     int arr[n];

// //     cout << "Enter the elements of the rotated sorted array: ";
// //     for (int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }

// //     int minimum = findMin(arr, 0, n - 1);
// //     cout << "Minimum element in the array is " << minimum << endl;

// //     return 0;
// // }



//  // // 014
//  // // Cpp program to find a Pair Sum in a Sorted 
//  // // and Rotated Array using Two Pointer Technique

// // #include <iostream>
// // #include <algorithm> // For sorting
// // using namespace std;

// // bool findSum(int arr[], int n, int target) {
// //     sort(arr, arr + n); // Sort the array first

// //     int left = 0, right = n - 1;

// //     while (left < right) {
// //         int sum = arr[left] + arr[right];

// //         if (sum == target)
// //             return true;
// //         else if (sum < target)
// //             left++; // Increase the sum
// //         else
// //             right--; // Decrease the sum
// //     }

// //     return false;
// // }

// // int main() {
// //     int n, target;
// //     cout << "Enter array size: ";
// //     cin >> n;
// //     int arr[n];

// //     cout << "Enter array elements: ";
// //     for (int i = 0; i < n; i++)
// //         cin >> arr[i];

// //     cout << "Enter target sum: ";
// //     cin >> target;

// //     if (findSum(arr, n, target))
// //         cout << "Yes, a pair exists with the given sum." << endl;
// //     else
// //         cout << "No pair found." << endl;

// //     return 0;
// // }



// //015
// //3SUM
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> result;
//     int n = nums.size();
    
//     // Step 1: Sort the array
//     sort(nums.begin(), nums.end());

//     // Step 2: Iterate through the array
//     for (int i = 0; i < n - 2; i++) {
//         // Skip duplicate elements
//         if (i > 0 && nums[i] == nums[i - 1]) continue;

//         int left = i + 1, right = n - 1;
        
//         while (left < right) {
//             int sum = nums[i] + nums[left] + nums[right];

//             if (sum == 0) {
//                 // Store the triplet
//                 result.push_back({nums[i], nums[left], nums[right]});
                
//                 // Move left pointer to avoid duplicates
//                 while (left < right && nums[left] == nums[left + 1]) left++;
//                 // Move right pointer to avoid duplicates
//                 while (left < right && nums[right] == nums[right - 1]) right--;

//                 left++;
//                 right--;
//             }
//             else if (sum < 0) {
//                 left++;  // Need a larger sum, move left pointer
//             }
//             else {
//                 right--; // Need a smaller sum, move right pointer
//             }
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> triplets = threeSum(nums);

//     cout << "Output: [";
//     for (const auto& triplet : triplets) {
//         cout << "[";
//         for (int i = 0; i < triplet.size(); i++) {
//             cout << triplet[i];
//             if (i < triplet.size() - 1) cout << ",";
//         }
//         cout << "] ";
//     }
//     cout << "]" << endl;
    
//     return 0;
// }
