//057
//find four element to sum
// C++ Program to find all Distinct Quadruplets with given
// Sum in an Array using Nested Loops

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find quadruplets that sum to the target
vector<vector<int>> fourSum(vector<int>& arr, int target) {
    vector<vector<int>> res;
    int n = arr.size();

    // Generating all possible quadruplets
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == target) {
                        vector<int> curr = {arr[i], arr[j], arr[k], arr[l]};
                        
                        // Sort as needed in the output
                        sort(curr.begin(), curr.end()); 

                        // Making sure that all quadruplets with target sum 
                        // are distinct
                        if (find(res.begin(), res.end(), curr) == res.end()) {
                            res.push_back(curr);
                        }
                    }
                }
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {10, 2, 3, 4, 5, 7, 8};
    int target = 23;
    vector<vector<int>> ans = fourSum(arr, target);
    for (const auto& v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
