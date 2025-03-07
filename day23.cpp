// // //041
// // //Count

// // #include <iostream>
// // using namespace std;

// // void countSort(int a[], int n) {
// //     int k = a[0];

// //     // Finding the maximum value in array
// //     for (int i = 1; i < n; i++) {
// //         if (a[i] > k) {
// //             k = a[i];
// //         }
// //     }

// //     // Initialize count array with zeros
// //     int count[k + 1] = {0};

// //     // Store frequency of each element
// //     for (int i = 0; i < n; i++) {
// //         count[a[i]]++;
// //     }

// //     // Modify count array to store cumulative sum
// //     for (int i = 1; i <= k; i++) {
// //         count[i] += count[i - 1];
// //     }

// //     // Create output array to store sorted values
// //     int output[n];
// //     for (int i = n - 1; i >= 0; i--) {
// //         output[count[a[i]] - 1] = a[i];
// //         count[a[i]]--;  // Decrease count after placing element
// //     }

// //     // Copy sorted elements back to original array
// //     for (int i = 0; i < n; i++) {
// //         a[i] = output[i];
// //     }

// //     // Print the sorted array
// //     for (int i = 0; i < n; i++) {
// //         cout << a[i] << " ";
// //     }
// // }

// // int main() {
// //     int n;
// //     cin >> n;

// //     int a[n];
// //     for (int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }

// //     countSort(a, n);
    
// //     return 0;
// // }






// //042
// //Find the common elements in three sorted array
// #include <iostream>
// using namespace std;

// void findCommonElements(int a[], int n1, int b[], int n2, int c[], int n3) {
//     int i = 0, j = 0, k = 0;

//     cout << "Common elements: ";
//     while (i < n1 && j < n2 && k < n3) {
//         // If all three elements are equal, print and move all three
//         if (a[i] == b[j] && b[j] == c[k]) {
//             cout << a[i] << " ";
//             i++;
//             j++;
//             k++;
//         }
//         // Move the pointer which has the smallest element
//         else if (a[i] < b[j]) {
//             i++;
//         }
//         else if (b[j] < c[k]) {
//             j++;
//         }
//         else {
//             k++;
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n1, n2, n3;
    
//     // Input for array 1
//     cout << "Enter size of array 1: ";
//     cin >> n1;
//     int a[n1];
//     cout << "Enter elements of array 1: ";
//     for (int i = 0; i < n1; i++) {
//         cin >> a[i];
//     }

//     // Input for array 2
//     cout << "Enter size of array 2: ";
//     cin >> n2;
//     int b[n2];
//     cout << "Enter elements of array 2: ";
//     for (int i = 0; i < n2; i++) {
//         cin >> b[i];
//     }

//     // Input for array 3
//     cout << "Enter size of array 3: ";
//     cin >> n3;
//     int c[n3];
//     cout << "Enter elements of array 3: ";
//     for (int i = 0; i < n3; i++) {
//         cin >> c[i];
//     }

//     // Call function to find common elements
//     findCommonElements(a, n1, b, n2, c, n3);

//     return 0;
// }
