//032
//convert given string to mobile
//032
// Convert given string to mobile keypad sequence
#include <iostream>
#include <string>
#include <cctype> // For toupper()

using namespace std;

string answer(string arr[], string input) {
    string output = "";

    // Traverse input string
    for (char c : input) {
        // Checking for space
        if (c == ' ') {
            output += "0";
        }
        // Checking for valid alphabetic characters
        else if (isalpha(c)) {
            // Convert lowercase to uppercase
            char upperChar = toupper(c);
            int position = upperChar - 'A'; // Get index
            output += arr[position]; // Append corresponding mobile sequence
        }
    }

    return output; // Return final sequence
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Read full input including spaces

    // Keypad mappings for 'A' to 'Z'
    string str[] = { "2",   "22",  "222", "3",   "33",  "333", "4",
                     "44",  "444", "5",   "55",  "555", "6",   "66",
                     "666", "7",   "77",  "777", "7777", "8",  "88",
                     "888", "9",   "99",  "999", "9999" };

    cout << "Answer is: " << answer(str, s) << endl;
    return 0;
}
