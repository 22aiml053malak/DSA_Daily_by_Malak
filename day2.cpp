// //Problem 006
// //Search in Rotated Sorted array
// #include <iostream>
// #include <vector>
// using namespace std;

// int search(vector<int>& nums, int target) {
//     int left = 0, right = nums.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;  // Avoids overflow

//         if (nums[mid] == target) {
//             return mid;  // Found the target
//         }

//         // Check if the left half is sorted
//         if (nums[left] <= nums[mid]) {
//             // Target is in the left sorted half
//             if (nums[left] <= target && target < nums[mid]) {
//                 right = mid - 1;
//             } else {  
//                 left = mid + 1;
//             }
//         }
//         // Otherwise, the right half is sorted
//         else {
//             // Target is in the right sorted half
//             if (nums[mid] < target && target <= nums[right]) {
//                 left = mid + 1;
//             } else {  
//                 right = mid - 1;
//             }
//         }
//     }
//     return -1;  
// }

// int main() {
//     vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
//     int target;
//     cin >> target;

//     int index = search(nums, target);
//     if (index != -1) {
//         cout << "Element found at index: " << index << endl;
//     } else {
//         cout << "Element not found." << endl;
//     }

//     return 0;
// }

