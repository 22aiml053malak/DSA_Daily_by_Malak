//40
//Permutation to find sum
// Input : a[] = {2, 1, 3}, 
//         b[] = { 7, 8, 9 }, 
//         k = 10. 
// Output : Yes
// Permutation  a[] = { 1, 2, 3 } and b[] = { 9, 8, 7 } 
// satisfied the condition a[i] + b[i] >= K.

// Input : a[] = {1, 2, 2, 1}, 
//         b[] = { 3, 3, 3, 4 }, 
//         k = 5. 
// Output : No


#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    int a[n], b[n];

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int k;
    cin >> k;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }

            }
        }



        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(b[j]>b[j+1]){
                    int temp=a[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                    }
                    
                }
            }
            bool t = true;

            for(int i=0;i<n;i++){
                if(a[i]+b[i]<k){
                    cout<<"false";
                    t=false;
                }
                

            }
            if(t){
                cout<<"true";
                }
                return 0;


    }



