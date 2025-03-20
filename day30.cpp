//051
//fnd duplicates in given array with in o(n)time and o(n)space complexity
#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    cout << "Duplicates: ";
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]); // Get the absolute value for indexing
        if (arr[index] < 0) {  // If the value at index is already negative, it's a duplicate
            cout << index << " ";
        } else {
            arr[index] = -arr[index];  // Mark as visited by negating
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findDuplicates(arr, n);
    return 0;
}
