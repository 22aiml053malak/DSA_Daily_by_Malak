//60
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to check if books can be allocated within maxPages limit
bool canAllocate(int arr[], int n, int k, int maxPages) {
    int students = 1, pagesSum = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages) return false; // Impossible case: single book exceeds limit
        
        if (pagesSum + arr[i] > maxPages) {
            students++; // Assign new student
            pagesSum = arr[i]; // Reset sum
            
            if (students > k) return false; // Exceeds student count
        } else {
            pagesSum += arr[i];
        }
    }
    return true;
}

// Function to find the minimum possible maximum pages allocated
int minMaxPages(int arr[], int n, int k) {
    if (k > n) return -1; // More students than books
    
    int low = *max_element(arr, arr + n); // Maximum book pages
    int high = accumulate(arr, arr + n, 0); // Total sum of pages
    int result = high;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid overflow
        
        if (canAllocate(arr, n, k, mid)) {
            result = mid; // Try for a better minimum
            high = mid - 1;
        } else {
            low = mid + 1; // Increase limit as allocation failed
        }
    }
    return result;
}

int main() {
    int n, k;
    cin >> n; // Number of books
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Book pages
    }
    
    cin >> k; // Number of students
    
    cout << minMaxPages(arr, n, k) << endl;
    return 0;
}