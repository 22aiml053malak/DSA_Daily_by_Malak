//043
//Searching in an array where adjacent differ by at most k
// Input : arr[] = {4, 5, 6, 7, 6}
// k = 1
// x = 6
// Output : 2
// The first index of 6 is 2.

// Input : arr[] = {20, 40, 50, 70, 70, 60}  
// k = 20
// x = 60
// Output : 5
// The index of 60 is 5

#include<iostream>
using namespace std;
int FunctionToUseStepProperty(int a[],int n,int x,int k){
    int i = 0;
    while(i<n){
        if(a[i]==x){
            break;
            
        }

        int step = abs((a[i]-x)/k);
        i = i+max(1,step);
    }
   return i;


}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    int x;
    cout<<"Give me target number x:";
    cin>>x;
    cout<<endl;

    int k;
    cout<<"Give me step diffrence k:";
    cin>>k;

    cout<<"The element x is on the:"<<FunctionToUseStepProperty(a,n,x,k);
         

}