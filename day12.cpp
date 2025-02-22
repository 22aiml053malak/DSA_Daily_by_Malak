// // //028
// // //anagram

// #include <iostream>
// #include <string>
// using namespace std;

// bool isAnagram(string s, string t) {
//     if (s.length() != t.length()) {
//         return false;  // Anagrams must be of the same length
//     }

//     int count[26] = {0}; // Array to count occurrences of each character (assuming lowercase)

//     for (int i = 0; i < s.length(); i++) {
//         count[s[i] - 'a']++;  // Increment for string s
//         count[t[i] - 'a']--;  // Decrement for string t
//     }

//     for (int i = 0; i < 26; i++) {
//         if (count[i] != 0) {
//             return false; // If any count is non-zero, they are not anagrams
//         }
//     }

//     return true;
// }

// int main() {
//     string s, t;
//     cin >> s >> t;

//     if (isAnagram(s, t)) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }

//     return 0;
// }
