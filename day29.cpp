// // //048
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // int MaxSumSub(int arr[], int n) {
// //     if (n == 0) return 0;
// //     if (n == 1) return arr[0];

// //     int prev2 = 0;      // max sum excluding the previous house
// //     int prev1 = arr[0]; // max sum including the previous house

// //     for (int i = 1; i < n; i++) {
// //         int include = prev2 + arr[i]; // Include the current house
// //         int exclude = prev1;          // Skip the current house

// //         int curr = max(include, exclude);
// //         prev2 = prev1;
// //         prev1 = curr;
// //     }

// //     return prev1;
// // }

// // int main() {
// //     int n;
// //     cin >> n;
// //     int a[n];

// //     for (int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }

// //     int maxSum = MaxSumSub(a, n);
// //     cout << "Maximum sum is " << maxSum << endl;

// //     return 0;
// // }








// //049
// #include <iostream>
// #include <cmath>  // For ceil function
// using namespace std;

// // Function to swap two numbers
// void swapIfGreater(int &a, int &b) {
//     if (a > b) {
//         swap(a, b);
//     }
// }

// // Function to merge two sorted arrays without extra space
// void mergeSortedArrays(int a[], int b[], int n, int m) {
//     int gap = ceil((n + m) / 2.0);  // Initial gap size
    
//     while (gap > 0) {
//         int i, j;

//         // Compare elements in the first array
//         for (i = 0; i + gap < n; i++) {
//             swapIfGreater(a[i], a[i + gap]);
//         }

//         // Compare elements between both arrays
//         for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++) {
//             swapIfGreater(a[i], b[j]);
//         }

//         // Compare elements in the second array
//         for (j = 0; j + gap < m; j++) {
//             swapIfGreater(b[j], b[j + gap]);
//         }

//         // Reduce the gap using shell sort approach
//         gap = (gap <= 1) ? 0 : ceil(gap / 2.0);
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int a[n], b[m];

//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < m; i++) cin >> b[i];

//     mergeSortedArrays(a, b, n, m);

//     cout << "a[] = ";
//     printArray(a, n);
//     cout << "b[] = ";
//     printArray(b, m);

//     return 0;
// }







// //50
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) 
//     {cin >> a[i];}
//     int count = 0;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j] && i<j){
//                 count++;

//     }
// }
// }
// cout << count;
// }
