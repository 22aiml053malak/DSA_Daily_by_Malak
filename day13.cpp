// //029
// //Valid parenthesis 


// #include <iostream>
// #include <stack>
// using namespace std;

// bool isValid(string s) {
//     stack<char> st;
//     for (char c : s) {
//         if (c == '(' || c == '{' || c == '[') {
//             st.push(c);
//         } else {
//             if (st.empty()) return false;
//             char top = st.top();
//             if ((c == ')' && top == '(') || 
//                 (c == '}' && top == '{') || 
//                 (c == ']' && top == '[')) {
//                 st.pop();
//             } else {
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }

// int main() {
//     string s;
//     cin >> s;
//     if (isValid(s)) 
//         cout << "true";
//     else 
//         cout << "false";
// }




// //030
// //remove cosecutive charecter

// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     string res = "";
//     for (char c : s) {
//         if (res.empty() || res.back() != c) {
//             res += c;
//             }
//             }
//             cout << res;
//             return 0;
//             }




// //031
// //Longest common prefix
// #include <iostream>
// #include <vector>
// using namespace std;

// string longestCommonPrefix(vector<string>& strs) {
//     if (strs.empty()) return "";

//     string prefix = strs[0]; // Start with the first string as prefix

//     for (int i = 1; i < strs.size(); i++) {
//         int j = 0;
//         while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
//             j++;
//         }
//         prefix = prefix.substr(0, j); // Update prefix to the common part
//         if (prefix.empty()) return ""; // If no common prefix, return early
//     }
//     return prefix;
// }

// int main() {
//     vector<string> strs;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;
//         strs.push_back(s);
//         }

//     cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;

    
    
//     return 0;
// }
