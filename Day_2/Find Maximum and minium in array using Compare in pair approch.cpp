/*Approch 3
Compare in pair
Time Complexity: O(n)
----------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
     
     long long max;
     long long min;
     int i=0;
     if(n%2==0){
        if(a[0]>a[1]){
           max=a[0];
           min=a[1];
       }else{
           max=a[1];
           min=a[0]; 
       }
       i=2;
     }else{
         max=a[0];
         min=a[0];
         i=1;
     }
     
     while(i<n-1){
         if(a[i]>a[i+1]){
             if(a[i]>max){
                 max=a[i];
             }
             
             if(a[i+1]<min){
                 min=a[i+1];
             }
         }else{
             if(a[i+1]>max){
                 max=a[i+1];
             }
             
             if(a[i]<min){
                 min=a[i];
             }
             
         }
         
         i=i+2;
     }
     
    return make_pair(min,max);
  
}