//36
//Group Anagram
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagrams;
    
    for (string& word : strs) {
        string sorted_word = word;
        sort(sorted_word.begin(), sorted_word.end());  // Sort the word
        anagrams[sorted_word].push_back(word);         // Group by sorted word
    }

    vector<vector<string>> result;
    for (auto& group : anagrams)
        result.push_back(group.second);
    
    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    for (auto& group : result) {
        cout << "[";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}
