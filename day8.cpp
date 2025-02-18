// // //020



// // // Input : arr[] = {15, 4, 15}
// // // Output : 0
// // // Array is already a palindrome. So we
// // // do not need any merge operation.
// // // Input : arr[] = {1, 4, 5, 1}
// // // Output : 1
// // // We can make given array palindrome with
// // // minimum one merging (merging 4 and 5 to
// // // make 9)
// // // Input : arr[] = {11, 14, 15, 99}
// // // Output : 3
// // // We need to merge all elements to make
// // // a palindrome.
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int a[n];
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>a[i];
// //         }
// //     int start = 0;
// //     int end = n-1;
// //     int count = 0;
    
// //     while(start<end){
            
        

// //         if(a[start] == a[end]){
// //             start ++;
// //             end --;
// //         }
// //         else if(a[start]<a[end]){
// //             a[start+1] = a[start+1] + a[start];
// //             start++;
// //             count++;
// //         }
// //         else{
// //             a[end-1] = a[end-1] + a[end];
// //             end--;
// //             count++;
        

// //         }
// //     }
// //     cout<<count;
// // }




// //021
// //Arrange given numbers to form the biggest number
// //Input: arr[] =  [3, 30, 34, 5, 9]
// // Output: “9534330”
// // Explanation: The arrangement [9, 5, 34, 3, 30], gives the largest value “9534330”.


// // Input: arr[] =  [54, 546, 548, 60]
// // Output: “6054854654”
// // Explanation: The arrangement [60, 548, 546, 54], gives the largest value “6054854654”.


// // Input: arr[] =  [3, 4, 6, 5, 9]
// // Output: “96543”
// // Explanation: The arrangement [9, 6, 5, 4, 3], gives the largest value “96543”.


// #include <iostream>
// #include <algorithm>
// #include <cstring>

// using namespace std;

// // Custom comparator function
// bool compare(string a, string b) {
//     return a + b > b + a; 
// }

// int main() {
//     int n;
//     cin >> n;  // Input size
//     string arr[n];

//     // Input numbers as strings
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Sort using custom comparator
//     sort(arr, arr + n, compare);

//     // Edge case: If the largest number is "0", return "0"
//     if (arr[0] == "0") {
//         cout << "0" << endl;
//         return 0;
//     }

//     // Print the largest number
//     for (int i = 0; i < n; i++) {
//         cout << arr[i];
//     }

//     cout << endl;
//     return 0;
// }



//022
//multiples of a and b uaing bit manipulation
// C++ program to mark numbers as multiple of 2 or 5
// #include <bits/stdc++.h>
// using namespace std;

// // Driver code
// int main()
// {
// 	int a = 2, b = 10;
// 	int size = abs(b - a) + 1;
// 	int* array = new int[size];

// 	// Iterate through a to b, If it is a multiple
// 	// of 2 or 5 Mark index in array as 1
// 	for (int i = a; i <= b; i++)
// 		if (i % 2 == 0 || i % 5 == 0)
// 			array[i - a] = 1;

// 	cout << "MULTIPLES of 2 and 5:\n";
// 	for (int i = a; i <= b; i++)
// 		if (array[i - a] == 1)
// 			cout << i << " ";

// 	return 0;
// }
