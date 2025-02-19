// // //023


// // //Shinchan's good array problem
// // // Shinchan's Good Array has the properties:

// // // Odd elements are in sorted order.
// // // Even elements are in sorted order.
// // // Odd elements occupy odd positions.
// // // Even elements occupy even positions.
// // // It has equal number of odd and even elements.

// // #include <iostream>
// // using namespace std;

// // // Function to make Shinchan's Good Array
// // int ShinchanGoodArray(int a[], int n) {
// //     int count = 0;

// //     // Step 1: Ensure odd numbers are at odd indices and even numbers at even indices
// //     for (int i = 0; i < n; i++) {
// //         if ((i % 2 == 0 && a[i] % 2 != 0) || (i % 2 == 1 && a[i] % 2 == 0)) {
// //             for (int j = i + 1; j < n; j++) {
// //                 if ((i % 2 == 0 && a[j] % 2 == 0) || (i % 2 == 1 && a[j] % 2 != 0)) {
// //                     swap(a[i], a[j]);
// //                     count++;
// //                     break;
// //                 }
// //             }
// //         }
// //     }

// //     // Step 2: Sort odd indexed and even indexed elements separately
// //     for (int i = 0; i < n - 1; i += 2) {
// //         for (int j = i + 2; j < n; j += 2) {
// //             if (a[i] > a[j]) {
// //                 swap(a[i], a[j]);
// //                 count++;
// //             }
// //         }
// //     }

// //     for (int i = 1; i < n - 1; i += 2) {
// //         for (int j = i + 2; j < n; j += 2) {
// //             if (a[i] > a[j]) {
// //                 swap(a[i], a[j]);
// //                 count++;
// //             }
// //         }
// //     }

// //     return count;
// // }

// // int main() {
// //     int n;
// //     cout << "Enter the length of the array: ";
// //     cin >> n;

// //     int a[n];
// //     cout << "Enter the elements of the array: ";
// //     for (int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }

// //     int swapCount = ShinchanGoodArray(a, n);

// //     cout << "Good Array: ";
// //     for (int i = 0; i < n; i++) {
// //         cout << a[i] << " ";
// //     }
// //     cout << endl;

// //     cout << "The number of swaps required is: " << swapCount << endl;

// //     return 0;
// // }




//024
// // // Find Missing and Duplicate element in an array
// input size 4
// elemnts  1 2 2 3


// expextde output 
// 4 and 2






// #include <iostream>
// #include <cmath> // For abs()
// #include <stdexcept> // For std::invalid_argument
// using namespace std;

// /**
//  * Function to find missing and duplicate elements in an array.
//  * 
//  * @param arr The input array.
//  * @param n The size of the array.
//  * @throws std::invalid_argument If the array size is less than 1.
//  */
// void findMissingAndDuplicate(int arr[], int n) {
//     if (n < 1) {
//         throw std::invalid_argument("Array size must be greater than 0.");
//     }

//     int expectedSum = (n * (n + 1)) / 2;
//     int actualSum = 0;
//     int duplicate = -1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 1 || arr[i] > n) {
//             throw std::invalid_argument("Array elements must be between 1 and " + to_string(n) + ".");
//         }

//         actualSum += arr[i];
//         if (arr[abs(arr[i]) - 1] < 0) { // If value is already negative, it's duplicate
//             duplicate = abs(arr[i]);
//         } else {
//             arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; // Mark visited
//         }
//     }

//     int missing = expectedSum - (actualSum - duplicate);

//     cout << "Missing element is: " << missing << endl;
//     cout << "Duplicate element is: " << duplicate << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     if (n < 1) {
//         cout << "Array size must be greater than 0." << endl;
//         return 1;
//     }

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     try {
//         findMissingAndDuplicate(arr, n);
//     } catch (const std::exception& e) {
//         cerr << "Error: " << e.what() << endl;
//         return 1;
//     }

//     return 0;
// }
// ```