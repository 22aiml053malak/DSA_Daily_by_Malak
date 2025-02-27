//longest Substring Without Repeating
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
    unordered_map<char, int> char_map;
    int start = 0, max_length = 0;

    for (int end = 0; end < s.length(); end++) {
        // If character is already in the substring, move the start pointer
        if (char_map.find(s[end]) != char_map.end() && char_map[s[end]] >= start) {
            start = char_map[s[end]] + 1;
        }
        // Update the character's latest index
        char_map[s[end]] = end;
        // Calculate the length of the current substring
        max_length = max(max_length, end - start + 1);
    }
    return max_length;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int result = longestSubstringWithoutRepeating(s);
    cout << "The length of the longest substring without repeating characters is: " << result << endl;

    return 0;
}
