// //019
// //Merge overlapping intervals
// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Interval {
//     int start, end;
// };

// bool compare(Interval a, Interval b) {
//     return a.start < b.start;
// }

// void mergeIntervals(Interval arr[], int n) {
//     sort(arr, arr + n, compare);
    
//     int index = 0;
//     for (int i = 1; i < n; i++) {
//         if (arr[index].end >= arr[i].start) {
//             arr[index].end = max(arr[index].end, arr[i].end);
//         } else {
//             index++;
//             arr[index] = arr[i];
//         }
//     }
    
//     for (int i = 0; i <= index; i++) {
//         cout << arr[i].start << " " << arr[i].end << endl;
//     }
// }

// int main() {
//     Interval arr[] = {{7, 8}, {1, 5}, {2, 4}, {4, 6}};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     mergeIntervals(arr, n);
//     return 0;
// }
