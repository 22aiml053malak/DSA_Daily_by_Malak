// //035
// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int characterReplacement(string s, int k) {
//     int left = 0, maxCount = 0, maxLength = 0;
//     unordered_map<char, int> freq; 

//     for (int right = 0; right < s.length(); right++) {
//         freq[s[right]]++;
//         maxCount = max(maxCount, freq[s[right]]);  
        
       
//         while ((right - left + 1) - maxCount > k) {
//             freq[s[left]]--;  
//             left++;
//         }

//         maxLength = max(maxLength, right - left + 1); 
//     }
    
//     return maxLength;
// }

// int main() {
//     string s1;
//     cin>>s1;
//     int k1;
//     cin>>k1;
//     cout << "Output: " << characterReplacement(s1, k1) << endl;  

    

//     return 0;
// }
