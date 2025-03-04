#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int index;
    cout<<"Enter a string: ";
    cin>>s;
    string ans = "";
    for(int i=0;i<s.length();i++){
        char c = s[i];
        for(int j=0;j<s.length();j++){
            if(c==s[j]){
                index = j;

        }


    }
    for(int i=0;i<index;i++)
        ans[i]=s[i];
    }
    cout<<ans;
   
    
}