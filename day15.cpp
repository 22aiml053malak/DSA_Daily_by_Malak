// //033
// //Print all the suplicate charecter

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str;
    
//     cin>>str;
//     int len = str.length();

//     sort(str.begin(),str.end());
//     for (int i = 0; i < len; i++) {
//         int count = 1;

//         // Counting the occurrences of each character
//         while (i < len - 1 && str[i] == str[i + 1]) {
//             count++;
//             i++;
//         }

//         // Printing the duplicate character and its count
//         if (count > 1) {
//             cout << str[i] << ", count = " << count << endl;
//         }
//     }


// }