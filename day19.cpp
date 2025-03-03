//37
// Given a string s, return the longest palindromic substring in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"
#include <iostream>
using namespace std;

string expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    string longest = "";
    for (int i = 0; i < s.size(); i++) {
        string odd = expandAroundCenter(s, i, i);     // Odd length palindrome
        string even = expandAroundCenter(s, i, i + 1); // Even length palindrome
        
        if (odd.size() > longest.size()) longest = odd;
        if (even.size() > longest.size()) longest = even;
    }
    return longest;
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s) << endl;
    return 0;
}
