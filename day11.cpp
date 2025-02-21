// // //MO's Algorithm








// //027



// // #include <bits/stdc++.h>
// // using namespace std;

// // struct Query {
// //     int L, R, index;
// // };

// // // Function to sort queries based on MO’s order
// // bool compare(Query q1, Query q2) {
// //     int block_size = sqrt(100); // Assuming max size of array
// //     if (q1.L / block_size != q2.L / block_size)
// //         return q1.L / block_size < q2.L / block_size;
// //     return q1.R < q2.R;
// // }

// // void moAlgorithm(int arr[], int n, vector<Query> &queries) {
// //     int q = queries.size();
// //     vector<int> answers(q);
    
// //     // Sort queries using Mo's ordering
// //     sort(queries.begin(), queries.end(), compare);
    
// //     int currL = 0, currR = -1, currSum = 0;
    
// //     for (Query q : queries) {
// //         int L = q.L, R = q.R;
        
// //         // Expand range to the right
// //         while (currR < R) {
// //             currR++;
// //             currSum += arr[currR];
// //         }
        
// //         // Shrink range from the right
// //         while (currR > R) {
// //             currSum -= arr[currR];
// //             currR--;
// //         }
        
// //         // Expand range to the left
// //         while (currL < L) {
// //             currSum -= arr[currL];
// //             currL++;
// //         }
        
// //         // Shrink range from the left
// //         while (currL > L) {
// //             currL--;
// //             currSum += arr[currL];
// //         }
        
// //         // Store the result
// //         answers[q.index] = currSum;
// //     }
    
// //     // Print the results in the order of original queries
// //     for (int i = 0; i < q; i++) {
// //         cout << "Sum of arr[] elements in range [" << queries[i].L << ", " << queries[i].R << "] is " << answers[i] << endl;
// //     }
// // }

// // int main() {
// //     int arr[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
// //     int n = sizeof(arr) / sizeof(arr[0]);
    
// //     vector<Query> queries = {{0, 4, 0}, {1, 3, 1}, {2, 4, 2}};
    
// //     moAlgorithm(arr, n, queries);
    
// //     return 0;
// // }
   









// //String







// //028
// #include <iostream>
// using namespace std;

// bool isPalindrome(string str) {
//     int left = 0;                // Start from the leftmost character
//     int right = str.length() - 1; // Start from the rightmost character

//     while (left < right) {
//         if (str[left] != str[right]) {
//             return false; // If characters don't match, it's NOT a palindrome
//         }
//         left++;  // Move left pointer to the right
//         right--; // Move right pointer to the left
//     }
//     return true; // If we finished the loop, it's a palindrome
// }

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;  // Take input from the user

//     if (isPalindrome(str)) {
//         cout << "The string is a palindrome!" << endl;
//     } else {
//         cout << "The string is NOT a palindrome." << endl;
//     }
//     return 0;
// }
