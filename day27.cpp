// //046
// // Majority Element in an Array...
// // Input : arr[] = {1, 1, 2, 1, 3, 5, 1}
// Output : 1
// Explanation: Note that 1 appear 4 times which is more than  7 / 2 times 


// Input : arr[] = {3, 3, 4, 2, 4, 4, 2, 4}
// Output :  -1 
// Explanation: There is no element whose frequency is greater than the half of the size of the array size.


// Input : arr[] = {3}
// Output : 3
// Explanation: Appears more than n/2 times

// #include<iostream>
// using namespace std;

// int Majority(int a[], int size) {
//     int candidate = a[0]; // Start with the first element as the candidate
//     int count = 1; // Initialize count for the candidate
    
//     // Find the candidate element
//     for (int i = 1; i < size; i++) {
//         if (a[i] == candidate) {
//             count++; // Increment count if the current element is the same as the candidate
//         } else {
//             count--; // Decrement count if the current element is different from the candidate
//             if (count == 0) {
//                 candidate = a[i]; // Change the candidate element if count reaches 0
//                 count = 1; // Reset the count to 1 for the new candidate
//             }
//         }
//     }
    
//     // Check if the candidate is the majority element
//     count = 0; // Reset the count to 0
//     for (int i = 0; i < size; i++) {
//         if (a[i] == candidate) {
//             count++; // Count occurrences of the candidate element
//         }
//     }

//     if (count > size / 2) {
//         return candidate; // Return the majority element if found
//     } else {
//         return -1; // Return -1 if no majority element exists
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int x = Majority(arr, n);
//     if (x != -1) {
//         cout << "The majority element is: " << x;
//     } else {
//         cout << "No majority element found.";
//     }
// }
