//047
#include<iostream>
#include<algorithm>
using namespace std;

int countTriplets(int arr[], int n, int sum) {
    sort(arr, arr + n); // Sort the array
    int count = 0;

    for (int i = 0; i < n - 2; i++) { // Fix the first element
        int left = i + 1, right = n - 1;
        
        while (left < right) {
            if (arr[i] + arr[left] + arr[right] < sum) {
                // If arr[i] + arr[left] + arr[right] is valid, then all elements 
                // between left and right form a valid triplet with arr[i].
                count += (right - left);
                left++; // Move left pointer forward to check more pairs
            } else {
                right--; // Reduce sum by moving right pointer backward
            }
        }
    }
    return count;
}

int main() {
    int arr1[] = {-2, 0, 1, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int sum1 = 2;
    cout << "Output: " << countTriplets(arr1, n1, sum1) << endl;

    int arr2[] = {5, 1, 3, 4, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int sum2 = 12;
    cout << "Output: " << countTriplets(arr2, n2, sum2) << endl;

    return 0;
}
