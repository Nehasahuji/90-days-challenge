/*Approch 2
Iterative method
Time Complexity: O(n)
-----------------------------------
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
     
     if(a[0]>a[1]){
         max=a[0];
         min=a[1];
     }else{
        max=a[1];
        min=a[0]; 
     }
     
     for(int i=2;i<n;i++){
         if(a[i]>max){
             max=a[i];
         }else if(a[i]<min){
             min=a[i];
         }
     }
     
    return make_pair(min,max);
  
}