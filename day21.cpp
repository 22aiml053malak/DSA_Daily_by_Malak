//039
//Longest palindromic substring
#include <iostream>
using namespace std;

string expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    
    string longest = "";
    
    for (int i = 0; i < s.length(); i++) {
        // Odd length palindrome (single character center)
        string oddPal = expandAroundCenter(s, i, i);
        if (oddPal.length() > longest.length()) longest = oddPal;

        // Even length palindrome (two-character center)
        string evenPal = expandAroundCenter(s, i, i + 1);
        if (evenPal.length() > longest.length()) longest = evenPal;
    }
    
    return longest;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
}
