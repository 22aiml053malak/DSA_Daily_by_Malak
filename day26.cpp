// //045
// //Find pair for given diffrence
// // This one is the brute force approach however we can use two pointer method but it needs an sorted array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         }
//     int diff;
//     cin>>diff;

//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-1;j++){
//             if(abs(arr[i]-arr[j])==diff){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;

//         }
//     }
// }}